#include<iostream>
#include<stdio.h>
#include<stdlib.h>
//to get heap memory
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int main(){
     
     struct rectangle r={10,5};
     cout<<r.length<<endl;
     //lets deal with a pointer :)
     rectangle *p=&r;
     cout<<p->length<<endl;
     rectangle *u=(struct rectangle *)malloc(sizeof(struct rectangle));
    u->length=10;
    u->breadth=5;
    cout<<u->length<<endl;
    // (*p).length do u remeber why this is not using because .have higher precedence :)
    return 0;
}