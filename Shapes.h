#ifndef SHAPES_H
#define	SHAPES_H
#include <GL/glfw.h>
#include <vector>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
using namespace std;

class Shapes{
public:
    Shapes(char shName, vector<string > fileNamesLight, vector<string > fileNamesDark, int imgPos, int cellpos);
    Shapes(char shName, string fileNameLight, string fileNameDark, int imgPos, int cellpos);
    Shapes(char shName, string fileNameLight, int imgPos, int cellpos);
                
    bool left, right, up, bottom;  
    bool isInWinPath;
    int cellPos;
    char shapeName; 
    
    void rotate();    
    GLuint getImage();
    
private:
       
    int currImagePos;    
    vector<GLuint> picFilesLight;
    vector<GLuint> picFilesDark;
    
    void checkRules();
    GLuint loadBMP ( string imagepath );
};


#endif	