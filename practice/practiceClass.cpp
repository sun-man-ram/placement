#include<iostream>
#include<stdio.h>
using namespace std;

class Rectangle
{
 private :
 int length;
 int breadth;
 public :
Rectangle(int length,int breadth){
    this->length=length;
    this->breadth=breadth;
}
int area(){
    return length*breadth;
}
int per(){
    return 2*(length+breadth);
}
};

int main(){

  Rectangle r(10,5);
  cout<<r.area()<<endl;
  cout<<r.per()<<endl;

    return 0;
}