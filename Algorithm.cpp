#include "Algorithm.h"
using namespace std;

Algorithm::Algorithm(){
    rows=0;
    columns=0;
}

void Algorithm::setRowsCols(int rw, int col){
    rows=rw;
    columns=col;
}

bool Algorithm::userWon ( vector<Shapes *> &shapes, vector<int> serverLoc, vector<int> clientLoc){
    int server, number; 
    vector<int> path, discardLst, clientList;
    
    for(int n=0; n<serverLoc.size(); n++){
        server=serverLoc.at(n);
        
        findPath (server, shapes, clientList, path, discardLst);
        
        while(!path.empty()){
            number=path.at(path.size()-1);
            discardLst.push_back(number);
            path.erase ( remove ( path.begin (), path.end (), number ), path.end () ); 
                        
            findPath (number, shapes, clientList, path, discardLst);
        }       
        
        path.clear();
        discardLst.clear();
    }
    
    return areListsSame(clientLoc, clientList);
}

int Algorithm::getRowNum ( int number )
{
    int currRow = 1;
    
    for ( int n = 1; n < rows * columns; n += columns )
    {
        if ( number >= n && number <= n + ( columns - 1 ) )
        {
            return currRow;
        }
        currRow++;
    }
    //cout<<"NUMBER: "<<number<<endl;
    return -1;
}

void Algorithm::findPath ( int number, vector<Shapes *> &shapes, vector<int> &clientList, vector<int> &path, vector<int> discardLst)
{
    if(shapes.at(number-1)->shapeName=='C'){
        if(!numberExists ( clientList, number)){
            clientList.push_back(number);
        }
        return ;
    }
    
    int left, right, up, bottom;
       
    left = number - 1;
    if ( getRowNum ( number ) != getRowNum ( left ) || left < 1 )
    {
        left = -1;
    }
    
    right = number + 1;
    if ( getRowNum ( number ) != getRowNum ( right ) 
            || right > rows * columns )
    {
        right = -1;
    }
    
    bottom = number - columns;
    if ( bottom < 1 )
    {
        bottom = -1;
    }
    
    up = number + columns;    
    if ( up > rows*columns )
    {
        up = -1;
    }
    
    if(left!=-1 && !numberExists(discardLst, left)){
            if(shapes.at(number-1)->left && shapes.at(left-1)->right){
                if(!numberExists(path, left)){
                    path.push_back(left);
                    shapes.at(number-1)->isInWinPath=true;
                    shapes.at(left-1)->isInWinPath=true;
                }
            }
        }
        
        if(right!=-1 && !numberExists(discardLst, right)){
            if(shapes.at(number-1)->right && shapes.at(right-1)->left){
                if(!numberExists(path, right)){
                    path.push_back(right);
                    shapes.at(number-1)->isInWinPath=true;
                    shapes.at(right-1)->isInWinPath=true;
                }
            }            
        }
        
        if(up!=-1 && !numberExists(discardLst, up)){
            if(shapes.at(number-1)->up && shapes.at(up-1)->bottom){
                if(!numberExists(path, up)){
                    path.push_back(up);
                    shapes.at(number-1)->isInWinPath=true;
                    shapes.at(up-1)->isInWinPath=true;
                }
            }
        }
        
        if(bottom!=-1 && !numberExists(discardLst, bottom)){
            if(shapes.at(number-1)->bottom && shapes.at(bottom-1)->up){
                if(!numberExists(path, bottom)){
                    path.push_back(bottom);
                    shapes.at(number-1)->isInWinPath=true;
                    shapes.at(bottom-1)->isInWinPath=true;
                }
            }
            
        }
}

bool Algorithm::numberExists ( vector<int> lst, int number){
    for(int n=0; n<lst.size(); n++){
        if(lst.at(n)==number) return true;
    }
    
    return false;
}

bool Algorithm::areListsSame ( vector<int> lst1, vector<int> lst2){
    if(lst1.size()!=lst2.size()) return false;
    
    for(int n=0; n<lst1.size(); n++){
        if(!numberExists(lst2, lst1.at(n))){
            return false;
        }
    }
    
    return true;
}