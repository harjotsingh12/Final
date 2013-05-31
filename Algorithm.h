#ifndef ALGORITHM_H
#define	ALGORITHM_H
#include "Shapes.h"
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Algorithm{
public:
    Algorithm();
    void setRowsCols(int rw, int col);
    int getRowNum ( int number );
    bool userWon ( vector<Shapes *> &shapes, vector<int> serverLoc, vector<int> clientLoc);
    
private:
    int rows, columns;
    
    void findPath ( int number, vector<Shapes *> &shapes, vector<int> &clientList, vector<int> &path, vector<int> discardLst);
    bool numberExists ( vector<int> lst, int number);
    bool areListsSame ( vector<int> lst1, vector<int> lst2);

    
};


#endif	

