/*
p17 - void function.cpp
Author: Max Taylor
Date:   3/5/18
*/

#include <iostream>
using namespace std;

//prototype of function
int getCube(int);

int main(){
    int x, y;
    x=0, y = 0;
    getCube(x);
    
    return 0;
}

int getCube(int x){
    int y;
    y=0;
    cin >> x;
    y = x*x*x;
    
    cout << "The cube of " << x << " is " << y << ".";
    
    return 0;
}
