#include<stdio.h>
#include<iostream>
using namespace std;
// in modular programming we need to use functions and strictures 
struct rectangle{
  int length;
  int breadth;
};

int area(rectangle r){
    return r.length*r.breadth;
}
int per(rectangle r){
    return 2*(r.length+r.breadth);
}
int main(){
    
    int length=0,breadth=0;
    rectangle r={0,0};
    //assignment is to write a initialise code 
    printf("enter length and breadth  \n");
    cin>>r.length>>r.breadth;
     cout<<area(r)<<endl<<per(r)<<endl;
    return 0;
}