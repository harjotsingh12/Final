void level2_1(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
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

    clientLoc.push_back(1);
    clientLoc.push_back(4);
    clientLoc.push_back(5);
    clientLoc.push_back(6);
    clientLoc.push_back(9);
    clientLoc.push_back(14);
    clientLoc.push_back(18);
    clientLoc.push_back(23);
    clientLoc.push_back(24);
    
    serverLoc.push_back(21);
    
    ai.getClientsConnected(shapes, serverLoc, clientLoc);
}


void level2_2(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 1));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 2));
    shapes.push_back(new Shapes('C', C_light, C_dark, 3, 3));
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 4));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 5));
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 6));
    shapes.push_back(new Shapes('P', P_light, P_dark, 0, 7));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 8));
    shapes.push_back(new Shapes('P', P_light, P_dark, 0, 9));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 10));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 11));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 12));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 13));
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 14));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 15));
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 16));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 17));
    shapes.push_back(new Shapes('S', "S_light_11.bmp", 11, 18));//change both name and position
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 19));
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 20));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 21));
    shapes.push_back(new Shapes('P', P_light, P_dark, 0, 22));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 23));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 24));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 25));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 26));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 27));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 28));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 29));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 30));

    clientLoc.push_back(1);
    clientLoc.push_back(3);
    clientLoc.push_back(5);
    clientLoc.push_back(10);
    clientLoc.push_back(13);
    clientLoc.push_back(16);
    clientLoc.push_back(20);
    clientLoc.push_back(25);
    clientLoc.push_back(26);
    
    serverLoc.push_back(18);
    
    ai.getClientsConnected(shapes, serverLoc, clientLoc);   
}


void level2_3(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 1));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 2));
    shapes.push_back(new Shapes('C', C_light, C_dark, 3, 3));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 4));
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 5));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 6));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 7));
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 8));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 9));
    shapes.push_back(new Shapes('T', T_light, T_dark, 2, 10));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 11));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 12));
    shapes.push_back(new Shapes('P', P_light, P_dark, 0, 13));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 14));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 15));
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 16));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 17));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 18));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 19));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 20));
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 21));
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 22));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 23));
shapes.push_back(new Shapes('S', "S_light_11.bmp",11, 24));//change both name and position
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 25));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 26));
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 27));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 28));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 29));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 30));

    clientLoc.push_back(3);
    clientLoc.push_back(4);
    clientLoc.push_back(7);
    clientLoc.push_back(16);
    clientLoc.push_back(18);
    clientLoc.push_back(27);
  
    serverLoc.push_back(24);
    
    ai.getClientsConnected(shapes, serverLoc, clientLoc);   
}


void level2_4(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 1));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 2));
    shapes.push_back(new Shapes('L', L_light, L_dark, 3, 3));
    shapes.push_back(new Shapes('T', T_light, T_dark, 2, 4));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 5));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 6));
    shapes.push_back(new Shapes('S', "S_light_4.bmp", 4, 7));//change both name and position
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 8));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 9));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 10));
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 11));
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 12));
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 13));
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 14));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 15));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 16));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 17));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 18));
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 19));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 20));
    shapes.push_back(new Shapes('L', L_light, L_dark, 3, 21));
    shapes.push_back(new Shapes('P', P_light, P_dark, 0, 22));
    shapes.push_back(new Shapes('P', P_light, P_dark, 0, 23));
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 24));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 25));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 26));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 27));
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 28));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 29));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 30));

    clientLoc.push_back(5);
    clientLoc.push_back(10);
    clientLoc.push_back(12);
    clientLoc.push_back(19);
    clientLoc.push_back(29);
    clientLoc.push_back(30);
    
    serverLoc.push_back(7);
    
    ai.getClientsConnected(shapes, serverLoc, clientLoc);
}


void level2_5(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
    shapes.push_back(new Shapes('C', C_light, C_dark, 3, 1));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 2));
    shapes.push_back(new Shapes('T', T_light, T_dark, 2, 3));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 4));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 5));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 6));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 7));
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 8));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 9));
    shapes.push_back(new Shapes('T', T_light, T_dark, 2, 10));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 11));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 12));
    shapes.push_back(new Shapes('P', P_light, P_dark, 0, 13));
    shapes.push_back(new Shapes('C', C_light, C_dark, 3, 14));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 15));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 16));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 17));
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 18));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 19));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 20));
    shapes.push_back(new Shapes('S', "S_light_4.bmp", 4, 21));//change both name and position
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 22));
    shapes.push_back(new Shapes('P', P_light, P_dark, 0, 23));
    shapes.push_back(new Shapes('T', T_light, T_dark, 2, 24));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 25));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 26));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 27));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 28));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 29));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 30));

    clientLoc.push_back(1);
    clientLoc.push_back(5);
    clientLoc.push_back(6);
    clientLoc.push_back(14);
    clientLoc.push_back(17);
    clientLoc.push_back(25);
    clientLoc.push_back(26);

    serverLoc.push_back(21);
    
    ai.getClientsConnected(shapes, serverLoc, clientLoc);
}


void level2_6(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 1));
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 2));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 3));
    shapes.push_back(new Shapes('T', T_light, T_dark, 2, 4));
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 5));
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 6));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 7));
    shapes.push_back(new Shapes('C', C_light, C_dark, 3, 8));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 9));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 10));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 11));
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 12));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 13));
    shapes.push_back(new Shapes('P', P_light, P_dark, 0, 14));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 15));
    shapes.push_back(new Shapes('C', C_light, C_dark, 1, 16));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 17));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 18));
    shapes.push_back(new Shapes('S', "S_light_10.bmp", 10, 19));//change both name and position
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 20));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 21));    
    shapes.push_back(new Shapes('P', P_light, P_dark, 0, 22));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 23));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 24));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 25));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 26));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 27));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 28));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 29));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 30));

    clientLoc.push_back(8);
    clientLoc.push_back(12);
    clientLoc.push_back(13);
    clientLoc.push_back(16);
    clientLoc.push_back(24);
    
    serverLoc.push_back(14);
    
    ai.getClientsConnected(shapes, serverLoc, clientLoc);
}

void level2_7(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 1));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 2));
    shapes.push_back(new Shapes('C', C_light, C_dark, 3, 3));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 4));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 5));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 6));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 7));
    shapes.push_back(new Shapes('C', C_light, C_dark, 3, 8));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 9));
    shapes.push_back(new Shapes('L', L_light, L_dark, 2, 10));
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 11));
    shapes.push_back(new Shapes('T', T_light, T_dark, 1, 12));
    shapes.push_back(new Shapes('T', T_light, T_dark, 2, 13));
    shapes.push_back(new Shapes('L', L_light, L_dark, 3, 14));
    shapes.push_back(new Shapes('C', C_light, C_dark, 3, 15));
    shapes.push_back(new Shapes('S', "S_light_11.bmp", 11, 16));//change both name and position
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 17));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 18));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 19));
    shapes.push_back(new Shapes('L', L_light, L_dark, 1, 20));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 21));
    shapes.push_back(new Shapes('T', T_light, T_dark, 0, 22));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 23));
    shapes.push_back(new Shapes('C', C_light, C_dark, 2, 24));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 25));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 26));
    shapes.push_back(new Shapes('L', L_light, L_dark, 3, 27));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 28));
    shapes.push_back(new Shapes('I', I_light, I_dark, 0, 29));
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 30));
    
    clientLoc.push_back(1);
    clientLoc.push_back(3);
    clientLoc.push_back(4);
    clientLoc.push_back(5);
    clientLoc.push_back(8);
    clientLoc.push_back(15);
    clientLoc.push_back(24);
    clientLoc.push_back(25);
    clientLoc.push_back(26);
    
    serverLoc.push_back(16);
    
    ai.getClientsConnected(shapes, serverLoc, clientLoc);
}



