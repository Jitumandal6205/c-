#ifndef EXERCISE_H
#define EXERCISE_H

#include<iostream>
using namespace std;

void PointerArith()
{
    int A[]={2,4,6,8,10,12};
    int *p=A;
    
    p++;
    cout<<*p;
    
    p=p+3; 
    
    cout<<p[-4];  
}

#endif 
