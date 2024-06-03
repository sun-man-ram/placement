#include<stdio.h>
#include<iostream>
using namespace std;

class Rectangle 
{
//by default these are private 
private:
  int length;
  int breadth;
public:
Rectangle(){
    length=0;
    breadth=0;
}
Rectangle(int l,int b){
    length=l;
    breadth=b;
}
int area(){
    return length*breadth;
}
int perimeter(){
    return 2*(length*breadth);
}
//mutatetd functions 
void setLength(int l){
    length=l;
}
void setBreadth(int b){
    breadth=b;
}
//accessors
int getLength(){
    return length;
}
int getBreadth(){
    return breadth;
}
~Rectangle(){
    cout<<"destructor"<<endl;
}
};


int main(){
    Rectangle r(10,5);
    cout<<r.area()<<endl;
    
    
    return 0;
}