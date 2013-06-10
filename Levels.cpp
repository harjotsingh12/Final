#include <stdlib.h>
#include <time.h>
#include <vector>
#include "Algorithm.h"
#include "Shapes.h"
using namespace std;

vector<string> L_light;
vector<string> L_dark;
    
vector<string> I_light;
vector<string> I_dark;
    
vector<string> T_light;
vector<string> T_dark;
   
vector<string> P_light;
vector<string> P_dark;
  
vector<string> C_light;
vector<string> C_dark;

void loadImages(){
    L_light.push_back("L_light_0.bmp");
    L_light.push_back("L_light_1.bmp");
    L_light.push_back("L_light_2.bmp");
    L_light.push_back("L_light_3.bmp");
    
    L_dark.push_back("L_dark_0.bmp");
    L_dark.push_back("L_dark_1.bmp");
    L_dark.push_back("L_dark_2.bmp");
    L_dark.push_back("L_dark_3.bmp");
    
    I_light.push_back("I_light_0.bmp");
    I_light.push_back("I_light_1.bmp");
        
    I_dark.push_back("I_dark_0.bmp");
    I_dark.push_back("I_dark_1.bmp");
    
    T_light.push_back("T_light_0.bmp");
    T_light.push_back("T_light_1.bmp");
    T_light.push_back("T_light_2.bmp");
    T_light.push_back("T_light_3.bmp");
    
    T_dark.push_back("T_dark_0.bmp");
    T_dark.push_back("T_dark_1.bmp");
    T_dark.push_back("T_dark_2.bmp");
    T_dark.push_back("T_dark_3.bmp");
    
    P_light.push_back("P_light_0.bmp");
            
    P_dark.push_back("P_dark_0.bmp");
    
    C_light.push_back("C_light_0.bmp");
    C_light.push_back("C_light_1.bmp");
    C_light.push_back("C_light_2.bmp");
    C_light.push_back("C_light_3.bmp");
    
    C_dark.push_back("C_dark_0.bmp");
    C_dark.push_back("C_dark_1.bmp");
    C_dark.push_back("C_dark_2.bmp");
    C_dark.push_back("C_dark_3.bmp");
}
    

void level1(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){    
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 1));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 2));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 3));
    shapes.push_back(new Shapes('S', "S_light_0.bmp", 0, 4)); //SERVER
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 5));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 6));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 7));
    shapes.push_back(new Shapes('P', P_light, P_dark, 0, 8));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 9));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 10));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 11));
    shapes.push_back(new Shapes('C', C_light, C_dark, 3, 12));

    clientLoc.push_back(1);
    clientLoc.push_back(3);
    clientLoc.push_back(10);
    clientLoc.push_back(12);

    serverLoc.push_back(4);

    ai.getClientsConnected(shapes, serverLoc, clientLoc);
}

void level2(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){    
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 1));
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 2));
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 3));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 4));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 5));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 6));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 7));
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 8));
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 9));
    shapes.push_back(new Shapes('T', T_light, T_dark, 2, 10));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 11));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 12));
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 13));
    shapes.push_back(new Shapes('C', C_light, C_dark, 3, 14));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 15));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 16));
    shapes.push_back(new Shapes('P', P_light, P_dark, 0, 17));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 18));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 19));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 20));
    shapes.push_back(new Shapes('S', "S_light_11.bmp", 11, 21));//change both name and position
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 22));
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 23));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 24));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 25));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 26));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 27));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 28));
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 29));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 30));

    clientLoc.push_back(1);//client 1
    clientLoc.push_back(4); //client 2
    clientLoc.push_back(5); //client 3
    clientLoc.push_back(6); //client 4
    clientLoc.push_back(9); //client 5
    clientLoc.push_back(14); //cleint 6
    clientLoc.push_back(18); //cleint 7
    clientLoc.push_back(23); //cleint 8
    clientLoc.push_back(24); //cleint 9
    
    serverLoc.push_back(21);
    
    ai.getClientsConnected(shapes, serverLoc, clientLoc);
}

void level3(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
    shapes.push_back(new Shapes('C', C_light,C_dark, 2, 1));
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 2));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 3));
    shapes.push_back(new Shapes('T', T_light, T_dark, 2, 4));
    shapes.push_back(new Shapes('T', T_light, T_dark, 2, 5));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 6));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 7));
    shapes.push_back(new Shapes('L', L_light, L_dark, 3, 8));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 9));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 10));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 11));
    shapes.push_back(new Shapes('P', P_light, P_dark, 0, 12));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 13));
    shapes.push_back(new Shapes('C', C_light, C_dark, 3, 14));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 15));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 16));
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 17));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 18));
    shapes.push_back(new Shapes('P', P_light, P_dark, 0, 19));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 20));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 21));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 22));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 23));
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 24));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 25));
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 26));
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 27));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 28));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 29));
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 30));
    shapes.push_back(new Shapes('S', "S_light_9.bmp", 9, 31));//change both name and position
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 32));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 33));
    shapes.push_back(new Shapes('T', T_light, T_dark, 2, 34));
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 35));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 36));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 37));
    shapes.push_back(new Shapes('P', P_light, P_dark, 0, 38));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 39));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 40));
    shapes.push_back(new Shapes('P', P_light, P_dark, 0, 41));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 42));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 43));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 44));
    shapes.push_back(new Shapes('L', L_light, L_dark, 3, 45));
    shapes.push_back(new Shapes('T', T_light, T_dark, 2, 46));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 47));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 48));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 49));
    shapes.push_back(new Shapes('C', C_light, C_dark, 3, 50));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 51));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 52));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 53));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 54));
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 55));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 56));

    clientLoc.push_back(1);
    clientLoc.push_back(10);
    clientLoc.push_back(13);
    clientLoc.push_back(14);
    clientLoc.push_back(18);
    clientLoc.push_back(27);
    clientLoc.push_back(29);
    clientLoc.push_back(32);
    clientLoc.push_back(47);
    clientLoc.push_back(50);
    clientLoc.push_back(52);
    clientLoc.push_back(56);
    
    serverLoc.push_back(31);
    
    ai.getClientsConnected(shapes, serverLoc, clientLoc);
}

void loadLevel(int levelNum, Algorithm &ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc, int &leftDistance, int &btmDistance, int &cellDim, int &rows, int &cols){
    switch(levelNum){
        case 1:
            leftDistance=365;
            btmDistance=80;
            cellDim=100;
            rows=4;
            cols=3;
            ai.setRowsCols(rows, cols);

            level1(ai, shapes, clientLoc, serverLoc );
            break;
        case 2:
            leftDistance=365;
            btmDistance=80;
            cellDim=100;
            rows=6;
            cols=5;
            ai.setRowsCols(rows, cols);
            
	    level2(ai, shapes, clientLoc, serverLoc );
            break;
            
        case 3:
             leftDistance=320;
            btmDistance=20;
            cellDim=90;
            rows=8;
            cols=7;
            ai.setRowsCols(rows, cols);
            
            level3(ai, shapes, clientLoc, serverLoc );
            break;
       
        case 4:
            break;
        case 5:
            
        case 6:
            break;    
            
    }

}
/*
void randomLevelEasy(Algorithm &ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc){
    srand(time(NULL));

    switch(rand() % 20 ){ 		// This should be changed to how many different grids we have of the Easy option.
	case 0 : level1_1(ai, shapes, clientLoc, serverLoc );break;
	case 1 : level1_2(ai, shapes, clientLoc, serverLoc );break;
	case 2 : level1_3(ai, shapes, clientLoc, serverLoc );break;
	case 3 : level1_4(ai, shapes, clientLoc, serverLoc );break;
	case 4 : level1_5(ai, shapes, clientLoc, serverLoc );break;
	case 5 : level1_6(ai, shapes, clientLoc, serverLoc );break;
	case 6 : level1_7(ai, shapes, clientLoc, serverLoc );break;
	case 7 : level1_8(ai, shapes, clientLoc, serverLoc );break;
	case 8 : level1_9(ai, shapes, clientLoc, serverLoc );break;
	case 9 : level1_10(ai, shapes, clientLoc, serverLoc );break;
	case 10 : level1_11(ai, shapes, clientLoc, serverLoc );break;
	case 11 : level1_12(ai, shapes, clientLoc, serverLoc );break;
	case 12 : level1_13(ai, shapes, clientLoc, serverLoc );break;
	case 13 : level1_14(ai, shapes, clientLoc, serverLoc );break;
	case 14 : level1_15(ai, shapes, clientLoc, serverLoc );break;
	case 15 : level1_16(ai, shapes, clientLoc, serverLoc );break;
	case 16 : level1_17(ai, shapes, clientLoc, serverLoc );break;
	case 17 : level1_18(ai, shapes, clientLoc, serverLoc );break;
	case 18 : level1_19(ai, shapes, clientLoc, serverLoc );break;
	case 19 : level1_20(ai, shapes, clientLoc, serverLoc );break;
    }
}
*/


void level1_3(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){    
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 1));
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 2));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 3));
    shapes.push_back(new Shapes('L', L_light, L_dark, 3, 4));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 5));
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 6));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 7));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 8));
    shapes.push_back(new Shapes('S', "S_light_12.bmp",12, 9)); //SERVER
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 10));
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 11));
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 12));
        
    clientLoc.push_back(1);
    clientLoc.push_back(2);
    clientLoc.push_back(10);
    clientLoc.push_back(11);
       
    serverLoc.push_back(9);
    
    ai.getClientsConnected(shapes, serverLoc, clientLoc);              
    
}



void level1_4(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 1));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 2));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 3));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 4));
    shapes.push_back(new Shapes('C', C_light, C_dark, 3, 5));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 6));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 7));
    shapes.push_back(new Shapes('S', "S_light_0.bmp", 0, 8)); //SERVER
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 9)); 
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 10));
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 11));
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 12));

    clientLoc.push_back(5);
    clientLoc.push_back(10);
    clientLoc.push_back(11);

    serverLoc.push_back(8);

    ai.getClientsConnected(shapes, serverLoc, clientLoc);

}

void level1_5(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 1));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 2));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 3));
    shapes.push_back(new Shapes('S', "S_light_0.bmp", 0, 4)); //SERVER
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 5));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 6));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 7));
    shapes.push_back(new Shapes('P', P_light, P_dark, 0, 8));
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 9));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 10));
    shapes.push_back(new Shapes('L', L_light, L_dark, 3, 11));
    shapes.push_back(new Shapes('C', C_light, C_dark, 3, 12));

    clientLoc.push_back(1);
    clientLoc.push_back(3);
    clientLoc.push_back(10);
    clientLoc.push_back(12);

    serverLoc.push_back(4);

    ai.getClientsConnected(shapes, serverLoc, clientLoc);

}

void level1_6(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 1));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 2));
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 3));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 4));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 5));
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 6));
    shapes.push_back(new Shapes('S', "S_light_6.bmp", 6, 7));  //SERVER
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 8));
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 9)); 
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 10));
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 11));
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 12));

    clientLoc.push_back(4);
    clientLoc.push_back(5);
    clientLoc.push_back(10);
    clientLoc.push_back(11);

    serverLoc.push_back(7);

    ai.getClientsConnected(shapes, serverLoc, clientLoc);

}

void level1_7(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 1));
    shapes.push_back(new Shapes('S', "S_light_13.bmp", 13, 2)); //SERVER
    shapes.push_back(new Shapes('C', C_light, C_dark, 3, 3));
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 4));
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 5));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 6));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 7));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 8));
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 9));
    shapes.push_back(new Shapes('L', L_light, L_dark, 3, 10));
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 11));
    shapes.push_back(new Shapes('C', C_light, C_dark, 3, 12));

    clientLoc.push_back(1);
    clientLoc.push_back(3);
    clientLoc.push_back(4);
    clientLoc.push_back(6);
    clientLoc.push_back(7);
    clientLoc.push_back(12);

    serverLoc.push_back(13);

    ai.getClientsConnected(shapes, serverLoc, clientLoc);

}

void level1_8(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 1));
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 2));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 3));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 4));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 5));
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 6));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 7));
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 8));
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 9)); 
    shapes.push_back(new Shapes('C', "S_light_4.bmp", 4, 10)); //SERVER
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 11));
    shapes.push_back(new Shapes('C', C_light, C_dark, 3, 12));

    clientLoc.push_back(1);
    clientLoc.push_back(2);
    clientLoc.push_back(8);
    clientLoc.push_back(12);

    serverLoc.push_back(10);

    ai.getClientsConnected(shapes, serverLoc, clientLoc);

}

void level1_9(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 1));
    shapes.push_back(new Shapes('T', T_light, T_dark, 2, 2));
    shapes.push_back(new Shapes('C', C_light, C_dark, 3, 3));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 4));
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 5));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 6));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 7));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 8));
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 9)); 
    shapes.push_back(new Shapes('S', "S_light_0.bmp", 0, 10)); //SERVER
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 11));
    shapes.push_back(new Shapes('C', C_light, C_dark, 3, 12));

    clientLoc.push_back(1);
    clientLoc.push_back(3);
    clientLoc.push_back(6);
    clientLoc.push_back(7);
    clientLoc.push_back(12);

    serverLoc.push_back(10);

    ai.getClientsConnected(shapes, serverLoc, clientLoc);

}

void level1_10(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 1));
    shapes.push_back(new Shapes('T', T_light, T_dark, 2, 2));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 3));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 4));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 5));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 6));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 7));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 8));
    shapes.push_back(new Shapes('S', "S_light_1.bmp",1, 9)); //SERVER
    shapes.push_back(new Shapes('L', L_light, L_dark, 3, 10));
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 11));
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 12));

    clientLoc.push_back(4);
    clientLoc.push_back(6);
    clientLoc.push_back(7);
    
    serverLoc.push_back(9);

    ai.getClientsConnected(shapes, serverLoc, clientLoc);

}

void level1_11(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 1));
    shapes.push_back(new Shapes('C', C_light, C_dark, 3, 2));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 3));
    shapes.push_back(new Shapes('L', L_light, L_dark, 3, 4));
    shapes.push_back(new Shapes('T', T_light, T_dark, 2, 5));
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 6));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 7));
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 8));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 9)); 
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 10));
    shapes.push_back(new Shapes('S', "S_light_4.bmp", 4, 11));
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 12));

    clientLoc.push_back(2);
    clientLoc.push_back(3);
    clientLoc.push_back(9);
    clientLoc.push_back(10);

    serverLoc.push_back(4);

    ai.getClientsConnected(shapes, serverLoc, clientLoc);

}

void level1_12(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 1));
    shapes.push_back(new Shapes('T', T_light, T_dark, 2, 2));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 3));
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 4));
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 5));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 6));
    shapes.push_back(new Shapes('S', "S_light_0.bmp", 0, 7)); //SERVER
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 8));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 9));
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 10));
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 11));
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 12));

    clientLoc.push_back(1);
    clientLoc.push_back(4);
    clientLoc.push_back(6);
    clientLoc.push_back(9);
    clientLoc.push_back(10);

    serverLoc.push_back(7);

    ai.getClientsConnected(shapes, serverLoc, clientLoc);

}



