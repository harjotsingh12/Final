void level1_1(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){    
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

void level1_2(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
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

void level1_3(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
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

void level1_4(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
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

void level1_5(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
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

void level1_6(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
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

void level1_7(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
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

void level1_8(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
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

void level1_9(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
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

void level1_10(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
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

void level1_11(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
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

void level1_12(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
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

void level1_13(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
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

void level1_14(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
    shapes.push_back(new Shapes('L', L_light, L_dark, 0, 1));
    shapes.push_back(new Shapes('I', I_light, I_dark, 1, 2));
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 3));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 4));
    shapes.push_back(new Shapes('C', C_light, C_dark, 0, 5));
    shapes.push_back(new Shapes('T', T_light, T_dark, 3, 6));
    shapes.push_back(new Shapes('S', "S_light_6.bmp", 6, 7)); //SERVER
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

void level1_15(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
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

void level1_16(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
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

void level1_17(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
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

void level1_18(Algorithm ai, vector<Shapes *> &shapes, vector<int> &clientLoc, vector<int> &serverLoc ){
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
