#include<stdio.h>
#include<iostream>
using namespace std;

// x properties and x methods :)

struct rectangle 
{
 int length;
 int breadth;
 void initialise(int l,int b){
    this->length=l;
    this->breadth=b;
 }
 int area(){
    return length*breadth;
 }
 };
int main(){
  rectangle r={100,100};
 cout<<r.area()<<endl;
    return 0;
}