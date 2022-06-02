#include <iostream>

#include "box.h"

 
using namespace std;

Box::Box(){
    //cout<<"Construct class";
}

Box::Box(int val){
    //cout<<"Construct class";
    this->val=val;
}
Box::~Box(){
    //cout<<"Destruct class";
}


double Box::getVolume() {
    
    return length * breadth * height;
}

int Box::getVal(){
    return val;
}

void Box::setVal(int i){
    val=i;
}


void printWidth( Box box ) {
   /* Because printWidth() is a friend of Box, it can
   directly access any member of this class */
   cout << "Width of box : " << box.height <<endl;
}


