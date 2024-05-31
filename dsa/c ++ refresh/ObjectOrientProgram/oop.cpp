#include<stdio.h>
#include<iostream>
using namespace std;
// using this we are aiming to convert this program into oop based program

struct rectangle

{
  int length;
  int breadth;

// here all area and per functions are working for a structure then wh they 
// need to write outside structure write them inside the structure :)
void initialise(int l,int b)
{
    length=l;
    breadth=b;
}
int area(){
    return length*breadth;
}
int per(){
    return 2*(length+breadth);
}
}
int main(){
    
    int length=0,breadth=0;
    rectangle r={0,0};
    //assignment is to write a initialise code 
    printf("enter length and breadth  \n");
    cin>>r.length>>r.breadth;
     cout<<area()<<endl<<per()<<endl;
    return 0;
}