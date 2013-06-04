#include "Shapes.h"
using namespace std;

Shapes::Shapes(char shName, string fileNameLight, int imgPos, int cellpos){
    shapeName=shName;
    currImagePos=imgPos;
    cellPos=cellpos;
    isInWinPath=false;
    
    picFilesLight.push_back(loadBMP(fileNameLight)); 
    
    checkRules();
}

Shapes::Shapes(char shName, vector<string> fileNamesLight, vector<string> fileNamesDark, int imgPos, int cellpos){
    shapeName=shName;
    currImagePos=imgPos;
    cellPos=cellpos;
    isInWinPath=false;
    
    for(int n=0; n<fileNamesLight.size(); n++){
        picFilesLight.push_back(loadBMP(fileNamesLight.at(n)));
        picFilesDark.push_back(loadBMP(fileNamesDark.at(n)));
    }
    
    checkRules();
}

Shapes::Shapes(char shName, string fileNameLight, string fileNameDark, int imgPos, int cellpos){
    shapeName=shName;
    currImagePos=imgPos;
    cellPos=cellpos;
    isInWinPath=false;
    
    picFilesLight.push_back(loadBMP(fileNameLight));
    picFilesDark.push_back(loadBMP(fileNameDark));
    
    checkRules();
}

void Shapes::rotate(){
    if(shapeName=='S' || shapeName=='P')return;
    
    if(currImagePos+1>=picFilesLight.size()){
        currImagePos=0;
    }else{
        currImagePos++;
    }
    
    checkRules();
}

GLuint Shapes::getImage(){
    if(shapeName=='S'){
        return picFilesLight.at(0);
    }else if(isInWinPath){
        return picFilesLight.at(currImagePos);
    }else{
        return picFilesDark.at(currImagePos);
    }
}

////////////////////////////////////////////////////
void Shapes::checkRules(){
    switch(shapeName){
        case 'L':
            switch(currImagePos){
                case 0:
                    left=false;
                    right=true;
                    up=true;
                    bottom=false;
                    break;
                    
                case 1:
                    left=true;
                    right=false;
                    up=true;
                    bottom=false;
                    break;
                    
                case 2:
                    left=true;
                    right=false;
                    up=false;
                    bottom=true;
                    break; 
                    
                case 3:
                    left=false;
                    right=true;
                    up=false;
                    bottom=true;
                    break;     
            }
            break;
            
        case 'I':
            switch(currImagePos){
                case 0:
                    left=false;
                    right=false;
                    up=true;
                    bottom=true;
                    break;
                    
                case 1:
                    left=true;
                    right=true;
                    up=false;
                    bottom=false;
                    break;
            }
            break;
            
        case 'T':
            switch(currImagePos){
                case 0:
                    left=true;
                    right=true;
                    up=false;
                    bottom=true;
                    break;
                    
                case 1:
                    left=false;
                    right=true;
                    up=true;
                    bottom=true;
                    break;
                    
                case 2:
                    left=true;
                    right=true;
                    up=true;
                    bottom=false;
                    break; 
                    
                case 3:
                    left=true;
                    right=false;
                    up=true;
                    bottom=true;
                    break;     
            }
            break;
            
        case 'P':
            left=true;
            right=true;
            up=true;
            bottom=true;
            break;
            
        case 'C':
            switch(currImagePos){
                case 0:
                    left=false;
                    right=false;
                    up=false;
                    bottom=true;
                    break;
                    
                case 1:
                    left=false;
                    right=true;
                    up=false;
                    bottom=false;
                    break;
                    
                case 2:
                    left=false;
                    right=false;
                    up=true;
                    bottom=false;
                    break; 
                    
                case 3:
                    left=true;
                    right=false;
                    up=false;
                    bottom=false;
                    break;     
            }
            break;
            
        case 'S':
            switch(currImagePos){
                case 0:
                    left=false;
                    right=true;
                    up=false;
                    bottom=false;
                    break;
                    
                case 1:
                    left=false;
                    right=false;
                    up=true;
                    bottom=false;
                    break;
                    
                case 2:
                    left=false;
                    right=true;
                    up=false;
                    bottom=false;
                    break; 
                    
                case 3:
                    left=false;
                    right=false;
                    up=false;
                    bottom=true;
                    break;   
                    
                case 4:
                    left=false;
                    right=true;
                    up=false;
                    bottom=true;
                    break;
                    
                case 5:
                    left=true;
                    right=true;
                    up=false;
                    bottom=false;
                    break;
                    
                case 6:
                    left=false;
                    right=true;
                    up=true;
                    bottom=false;
                    break; 
                    
                case 7:
                    left=false;
                    right=false;
                    up=true;
                    bottom=true;
                    break;   
                    
                case 8:
                    left=true;
                    right=false;
                    up=false;
                    bottom=true;
                    break;
                    
                case 9:
                    left=true;
                    right=false;
                    up=true;
                    bottom=false;
                    break;
                    
                case 10:
                    left=true;
                    right=true;
                    up=false;
                    bottom=true;
                    break; 
                    
                case 11:
                    left=false;
                    right=true;
                    up=true;
                    bottom=true;
                    break;   
                    
                case 12:
                    left=true;
                    right=false;
                    up=true;
                    bottom=true;
                    break;
                    
                case 13:
                    left=true;
                    right=true;
                    up=true;
                    bottom=false;
                    break;
                    
                case 14:
                    left=true;
                    right=true;
                    up=true;
                    bottom=true;
                    break;    
            }
            break;
    }
}

GLuint Shapes::loadBMP ( string imagepath )
{
    imagepath="/home/harjot/NetBeansProjects/Final/dist/Debug/GNU-Linux-x86/"+imagepath;
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