#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include "glfw.h"
#include <iostream>
#include <vector>
#include <unistd.h>
#include <pthread.h>
#include "Shapes.h";
#include "Algorithm.h"
#include "fmod.hpp"
#include "fmod_errors.h"
#include "wincompat.h"
using namespace std;

void checkKeyboard ( bool &go );
void reset();
void *startThread ( void *threadid );
int init_glfw ( void );
void init_opengl ( void );
void GLFWCALL mouse_click(int button, int action);
void printCo();
void buildGrid();
int getCellNum(int gridRowNum, int gridColNum);
GLuint loadBMP ( string imagepath );
void DrawImage( GLuint num, float x1, float x2, float y1, float y2 );
void loadImages();
void ERRCHECK(FMOD_RESULT result);
void *playSound(void *);
void loadLevel(int levelNum, Algorithm &ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc, int &leftDistance, int &btmDistance, int &cellDim, int &rows, int &cols);
void level1(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc );
void level2(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc );


int xres, yres, currCell;

//////
struct Squares{
    int x1, y1;
    int x2, y2;
    int x3, y3;
    int x4, y4;
};

const int gap=1;
int leftDistance;
int btmDistance;
int cellDim;
int rows;
int cols;
vector<Squares *> squares;
///////////////
vector<Shapes *> shapes;
vector<int> clientLoc;
vector<int> serverLoc;
Algorithm ai;
GLuint thinking, happy, texture, bOptions,
        menu, lastScreen;
bool WON=false;
int totClientsConn=0;
int totalClicks=0;

struct Screen {
    int number;
    int nextScreen;
};
Screen *screen= new Screen;

struct Sound {
    bool loop;
    string filename;
    int screen;
};
Sound *snd=new Sound();

pthread_t sndThread;

int main(int argc, char** argv) {
    bool go = true;
    screen->number = 1;    
    loadImages();
    
    if (init_glfw()){
        exit ( EXIT_FAILURE );
    }
    
    init_opengl();
    thinking=loadBMP("thinking.bmp");
    happy=loadBMP("happy.bmp");
    texture=loadBMP("Texture.bmp");
    bOptions=loadBMP("boardOptions.bmp");        
    menu=loadBMP("Menu.bmp"); 
    lastScreen=loadBMP("LastScreen.bmp");
            
    while(go){    
        switch(screen->number){
            case 1:               
                DrawImage( menu, 0, xres, 0, yres);
                
                if(snd->screen!=1){
                    snd->screen=1;
                    snd->loop=true;
                    snd->filename="Menu.mp3";                    
                    
                    pthread_create ( &sndThread, NULL, playSound, ( void * ) NULL); 
                }
                
                break;
                
            case 2:                
                printCo();
                DrawImage( bOptions, squares.at(0)->x1-270, squares.at(0)->x1-5, squares.at(0)->y1,  squares.at((rows-1)*cols)->y3);
                if(WON){
                    DrawImage( happy, squares.at(cols-1)->x2+5, squares.at(cols-1)->x2+5+350, 400,  650);
                }else{    
                    DrawImage( thinking, squares.at(cols-1)->x2+5, squares.at(cols-1)->x2+5+350, 400,  650);
                }
                
                if(snd->screen!=2){
                    snd->screen=2;
                    snd->loop=false;
                }
                break;
                
            case 3:             
                WON=false;
                DrawImage( lastScreen, 0, xres, 0, yres);  
                
                if(snd->screen!=3){
                    snd->screen=3;
                    snd->loop=true;
                    snd->filename="Last.mp3";                    
                    
                    pthread_create ( &sndThread, NULL, playSound, ( void * ) NULL); 
                }
                break;       
        }
        checkKeyboard(go);                
            
        glfwSwapBuffers (); 
	if ( !glfwGetWindowParam ( GLFW_OPENED ) ) break;
    }
    
    for(int n=0; n<squares.size(); n++){
        delete squares.at(n);
        delete shapes.at(n);
    }
    delete screen;
    delete snd;
            
    glfwTerminate ();
    return 0;
}

void checkKeyboard ( bool &go )
{
    if(WON)return;
    
    if ( glfwGetKey ( 'Q' ) == GLFW_PRESS || glfwGetKey ( 'q' ) == GLFW_PRESS )
    {
        go = false;
        
    }else if ( glfwGetKey ( '1' ) == GLFW_PRESS && screen->number == 1 )
    {
        reset ();
        loadLevel(1, ai, shapes, clientLoc, serverLoc, leftDistance, btmDistance, cellDim, rows, cols);
        buildGrid();
        screen->number = 2;        
        
    }else if ( glfwGetKey ( '2' ) == GLFW_PRESS && screen->number == 1 )
    {
       reset ();
       loadLevel(2, ai, shapes, clientLoc, serverLoc, leftDistance, btmDistance, cellDim, rows, cols);
       buildGrid();
       screen->number = 2;      
        
    }else if ( glfwGetKey ( '3' ) == GLFW_PRESS && screen->number == 1 )
    {
        loadLevel(3, ai, shapes, clientLoc, serverLoc, leftDistance, btmDistance, cellDim, rows, cols);
        buildGrid();
        screen->number = 2;   
        
    }else if ( glfwGetKey ( '4' ) == GLFW_PRESS && screen->number == 1 )
    {
        //screen->number = 2;  
       
    }else if ( glfwGetKey ( '5' ) == GLFW_PRESS && screen->number == 1 )
    {
        //
        
    }else if ( glfwGetKey ( '6' ) == GLFW_PRESS && screen->number == 1 )
    {
        //screen->number = 2;      
        
    }else if ( ( glfwGetKey ( 'S' ) == GLFW_PRESS 
            || glfwGetKey ( 's' ) == GLFW_PRESS) && screen->number == 2 )
    {
        reset ();
        screen->number = 1;        
        
    }else if ( ( glfwGetKey ( 'M' ) == GLFW_PRESS
            || glfwGetKey ( 'm' ) == GLFW_PRESS ) 
            && screen->number == 3 )
    {
        screen->number = 1;
    }else if (glfwGetKey ( 't' ) == GLFW_PRESS
            || glfwGetKey ( 'T' ) == GLFW_PRESS)
    {
        screen->number = 3;
    }
}

int init_glfw ( void )
{
    int nmodes;
    GLFWvidmode glist[256];
    
    if ( !glfwInit () )
    {
        cout<<"Failed to initialize GLFW"<<endl;
	return 1;
    }
    
    //get the monitor native full-screen resolution
    nmodes = glfwGetVideoModes ( glist, 250 );
    xres = glist[nmodes-1].Width;
    yres = glist[nmodes-1].Height;
    //create a window
    //if (!glfwOpenWindow(xres, yres, 0, 0, 0, 0, 0, 0, GLFW_WINDOW)) {
    if ( !glfwOpenWindow ( xres,yres,8,8,8,0,32,0,GLFW_FULLSCREEN ) )
    {
        glfwTerminate ();
	return 1;
    }
    
    glfwSetWindowTitle ( "Game Board and Grid" );
    glfwSetWindowPos ( 0, 0 );
    //make sure we see the escape key pressed
    glfwEnable ( GLFW_STICKY_KEYS );
    glfwSetMouseButtonCallback ( mouse_click ); 
    glfwEnable ( GLFW_MOUSE_CURSOR );
    //enable vertical sync (on cards that support it)
    glfwSwapInterval ( 1 );
    return 0;
}

void init_opengl ( void )
{
    //OpenGL initialization
    glClearColor ( 0.0f, 0.0f, 0.0f, 1.0f );
    glColor3f ( 1.0f, 1.0f, 0.0f );
    glClearDepth ( 1.0f );
    glClear ( GL_COLOR_BUFFER_BIT );
    glEnable ( GL_COLOR_MATERIAL );
    //
    //choose one of these
    //glShadeModel(GL_FLAT);
    glShadeModel ( GL_SMOOTH );
    glDisable ( GL_LIGHTING );
    glBindTexture ( GL_TEXTURE_2D, 0 );
    //
    glEnable ( GL_TEXTURE_2D );
        
    //load bmp here       
    //loadLevel(1, ai, shapes, clientLoc, serverLoc, leftDistance, btmDistance, cellDim, rows, cols);
    
    //clear color buffer
    glClearColor ( 0.1f, 0.2f, 0.3f, 0.0f );
    glClear ( GL_COLOR_BUFFER_BIT );
    //init matrices
    glMatrixMode ( GL_PROJECTION); glLoadIdentity ();
    glMatrixMode( GL_MODELVIEW ); glLoadIdentity ();
    //this sets to 2D mode (no perspective)
    glOrtho ( 0, xres, 0, yres, -1, 1 );
    glBindTexture ( GL_TEXTURE_2D, 0 ); 
    
    glViewport ( 0, 0, xres, yres );
    //clear color buffer
    //glClearColor ( 0.1f, 0.2f, 0.3f, 0.0f );
    //glClear ( GL_COLOR_BUFFER_BIT );
    //init matrices
    glMatrixMode ( GL_PROJECTION); glLoadIdentity ();
    glMatrixMode( GL_MODELVIEW ); glLoadIdentity ();
    //this sets to 2D mode (no perspective)
    glOrtho ( 0, xres, 0, yres, -1, 1 );
    
}

void GLFWCALL mouse_click(int button, int action){
    if ( action == GLFW_PRESS && button == GLFW_MOUSE_BUTTON_LEFT){
        if(currCell<1 || currCell>rows*cols || WON || screen->number!=2) return;
        int clientsConn;
        
        shapes.at(currCell-1)->rotate();
        for(int n=0; n<shapes.size(); n++){
            shapes.at(n)->isInWinPath=false;            
        }
        
        clientsConn=ai.getClientsConnected(shapes, serverLoc, clientLoc);         
        
        if(clientsConn==totClientsConn){
            snd->filename="Beep1.mp3";    
        }else{
            snd->filename="Beep2.mp3"; 
        }
        pthread_create ( &sndThread, NULL, playSound, ( void * ) NULL); 
        totClientsConn=clientsConn;
        
        if(clientsConn==clientLoc.size()){ 
            WON=true;
            screen->nextScreen=3;
            
            pthread_t thread;
            pthread_create ( &thread, NULL, startThread,\
                    ( void * ) screen);  
        }
    }
}

void printCo(){
    int x, y;
    
    glViewport ( 0, 0, xres, yres );
    DrawImage( texture, 0, xres, 0,  yres);
    //clear color buffer
    //glClearColor ( 0.1f, 0.2f, 0.3f, 0.0f );
    //glClear ( GL_COLOR_BUFFER_BIT );
    //init matrices
    glMatrixMode ( GL_PROJECTION); glLoadIdentity ();
    glMatrixMode( GL_MODELVIEW ); glLoadIdentity ();
    //this sets to 2D mode (no perspective)
    glOrtho ( 0, xres, 0, yres, -1, 1 );
    
    glfwGetMousePos ( &x, &y );
    y=yres-y-btmDistance+cellDim;
    x=x-leftDistance+cellDim;
    //cout<<x<<", "<<y<<endl;
    
    //glColor3f ( 1.0f, 1.0f, 1.0f );
    
    if(x<=cellDim || x>=((cols*cellDim)+cols*gap)+cellDim){
        currCell=-1;
    }else{
        currCell=getCellNum(y/(cellDim+gap), x/(cellDim+gap));
    }
    //cout<<currCell<<endl;
    //cout<<(float)x/dim<<", "<<(float)y/dim<<endl;
    
    for(int n=0; n<squares.size(); n++){
        if(currCell==n+1){
            glColor3f ( 0.0f, 0.0f, 1.0f );
        }else{
            glColor3f ( 1.0f, 1.0f, 1.0f );
        }
        
        if(shapes.at(n)->cellPos==n+1){
            glBindTexture ( GL_TEXTURE_2D, shapes.at(n)->getImage() );
        }else{
            glBindTexture ( GL_TEXTURE_2D, 0 );
        }        
        
        glBegin(GL_QUADS);
            glTexCoord2f ( 0.0f,0.0f );
            glVertex2f ( squares.at(n)->x1, squares.at(n)->y1 );
            glTexCoord2f ( 1.0f,0.0f );
            glVertex2f ( squares.at(n)->x2, squares.at(n)->y2 );
            glTexCoord2f ( 1.0f,1.0f );
            glVertex2f ( squares.at(n)->x3, squares.at(n)->y3 );
            glTexCoord2f ( 0.0f,1.0f );
            glVertex2f ( squares.at(n)->x4, squares.at(n)->y4 );            
        glEnd();
    }
    
    
}

void buildGrid(){
    int x=0, y=0;
    
    for(int r=0; r<rows; r++){
        for(int c=0; c<cols; c++){
            Squares *square = new Squares();
            
            square->x1=leftDistance+x;
            square->y1=btmDistance+y;
            
            square->x2=square->x1+cellDim;
            square->y2=square->y1;
            
            square->x3=square->x2;
            square->y3=square->y2+cellDim;
            
            square->x4=square->x1;
            square->y4=square->y3;
            
            squares.push_back(square);
            
            x+=cellDim+gap;            
        }
        y+=cellDim+gap;
        x=0;
    }
    
    //for(int r=0; r<squares.size(); r++){
        //cout<<"*****"<<r+1<<"*****"<<endl;
        //cout<<squares.at(r)->x1<<", "<<squares.at(r)->y1<<endl;
        //cout<<squares.at(r)->x2<<", "<<squares.at(r)->y2<<endl;
        //cout<<squares.at(r)->x3<<", "<<squares.at(r)->y3<<endl;
        //cout<<squares.at(r)->x4<<", "<<squares.at(r)->y4<<endl;
    //}
    //exit(0);
}

int getCellNum(int gridRowNum, int gridColNum){
    return ( ( gridRowNum - 1 ) * cols ) + gridColNum;
}
/////////////////////////////////////
GLuint loadBMP ( string imagepath )
{
    //imagepath="/home/harjot/NetBeansProjects/Final/dist/Debug/GNU-Linux-x86/"+imagepath;
    //When you create your texture files, please specify
    //type: BMP
    //color depth: 24-bit
    unsigned int retval;
    unsigned char header[54];
    //Each BMP file begins by a 54-bytes header
    //Position in the file where the actual data begins
    unsigned int dataPos;
    unsigned int width, height;
    unsigned int imageSize;
    // = width*height*3
    //RGB data will go in this
    unsigned char *data; 
    //
    printf ( "loadBMP(%s)...\n", imagepath.c_str() );
    //Log("opening file **%s**\n",imagepath);
    
    FILE * file = fopen ( imagepath.c_str(), "r" );
    if ( !file )
    {
        printf ( "Image could not be opened\n" );
	return 0;
    } 
    
    if ( fread ( header, 1, 54, file ) !=54 )
    {
	// If not 54 bytes read : problem
	printf ( "Not a correct BMP file\n" );
	return 0;
    }
    
    if ( header[0] != 'B' || header[1] != 'M' )
    {
	printf ( "Not a correct BMP file\n" );
	return 0;
    }
    
    dataPos   = *(int*) & ( header[0x0A] );
    imageSize = *(int*) & ( header[0x22] );
    width     = *(int*) & ( header[0x12] );
    height    = *(int*) & ( header[0x16] ); 
    
    //Some BMP files are misformatted, guess missing information
    if ( imageSize == 0 ) imageSize = width * height * 3;
    if ( dataPos == 0 ) dataPos = 54;
    
    data = ( unsigned char * ) malloc ( imageSize + 1 );
    //Read the actual data from the file into the buffer
    retval = fread ( data, 1, imageSize, file );
    fclose ( file ); 
    //In glTexImage2D, the GL_RGB indicates that we are talking
    //about a 3-component color, and GL_BGR says how exactly
    //it is represented in RAM. As a matter of fact, BMP does
    //not store Red->Green->Blue but Blue->Green->Red, so we
    //have to tell it to OpenGL.
    #define GL_BGR 0x80E0
    //Create one OpenGL texture
    GLuint textureID;
    glGenTextures ( 1, &textureID );
    glBindTexture ( GL_TEXTURE_2D, textureID );
    glTexImage2D ( GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_BGR, \
            GL_UNSIGNED_BYTE, data );
    
    glTexParameteri ( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST );
    glTexParameteri ( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST ); 
    free ( data );
    
    return textureID;
}

void DrawImage( GLuint num, float x1, float x2, float y1, float y2 )
{
    
    glBindTexture ( GL_TEXTURE_2D, num );
    glColor3f ( 1.0f, 1.0f, 1.0f );
    
    glBegin ( GL_QUADS );
      glTexCoord2f ( 0.0f, 0.0f );
      glVertex2f ( x1, y1 );
      glTexCoord2f ( 1.0f, 0.0f );
      glVertex2f ( x2, y1 );
      glTexCoord2f ( 1.0f, 1.0f );
      glVertex2f ( x2, y2 );
      glTexCoord2f ( 0.0f, 1.0f );
      glVertex2f ( x1, y2 );
    glEnd ();
}

void reset(){
    for(int n=0; n<squares.size(); n++){
        delete squares.at(n);
        squares.at(n)=NULL;
        delete shapes.at(n);
        shapes.at(n)=NULL;
    };
    
    squares.clear();
    shapes.clear();
    clientLoc.clear();
    serverLoc.clear();
    
    WON=false;
    totClientsConn=0;
    totalClicks=0;
}

void *startThread ( void *threadid )
{
    Screen *sc = ( Screen * ) threadid;
    sleep ( 1 );
    sc->number = sc->nextScreen;      
}
///////////////////////////////



void ERRCHECK(FMOD_RESULT result)
{
    if (result != FMOD_OK)
    {
        printf("FMOD error! (%d) %s\n", result, FMOD_ErrorString(result));
                
        exit(-1);
    }
}


void *playSound(void *)
{    
    FMOD::System     *system;
    FMOD::Sound      *sound;
    FMOD::Channel    *channel = 0;
    FMOD_RESULT       result;
    int               key;
    unsigned int      version;
    
    bool isPlaying;
    
    /*
        Create a System object and initialize.
    */
    result = FMOD::System_Create(&system);
    ERRCHECK(result);

    result = system->getVersion(&version);
    ERRCHECK(result);

    if (version < FMOD_VERSION)
    {
        printf("Error!  You are using an old version of FMOD %08x.  This program requires %08x\n", version, FMOD_VERSION);
        getch();
        return 0;
    }

    result = system->init(1, FMOD_INIT_NORMAL, 0);
    ERRCHECK(result);

    result = system->createSound(snd->filename.c_str(), FMOD_SOFTWARE | FMOD_2D | FMOD_CREATESTREAM, 0, &sound);
    ERRCHECK(result);

    if(!snd->loop){
        result = system->playSound(FMOD_CHANNEL_FREE, sound, false, &channel);
        ERRCHECK(result);
    
        while(channel->isPlaying(&isPlaying) == FMOD_OK && isPlaying){
            if(snd->screen!=screen->number){
                channel->stop();
                break;
            }
        }
    }else{
        while(snd->screen==screen->number){
            result = system->playSound(FMOD_CHANNEL_FREE, sound, false, &channel);
            ERRCHECK(result);
            
            while(channel->isPlaying(&isPlaying) == FMOD_OK && isPlaying){
                if(snd->screen!=screen->number){
                    channel->stop();
                    break;
                }
            }
        }
    }
    
       
        
    /*
        Shut down
    */
    result = sound->release();
    ERRCHECK(result);
    result = system->close();
    ERRCHECK(result);
    result = system->release();
    ERRCHECK(result);
    
    pthread_exit(0);
}
