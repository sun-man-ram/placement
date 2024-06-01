#include<iostream>
#include<stdio.h>
using namespace std;
// here i am passing structre as a parameter
struct rectangle{
  int length;
  int breadth;
};
// this is call by value :)
int area(rectangle r){
  cout<<"area  "<<r.length*r.breadth<<endl;
  return 10;
}
// call by reference 
int area1(rectangle &a){
    a.length++;
    return 0;
}
// call by address
int area2(rectangle *r){
  r->length++;
 cout<<"area "<<r->length*r->breadth<<endl;

    return 10;
}
int main(){
rectangle r={10,10};
cout<<"area "<<r.length*r.breadth<<endl;
area1(r);
 area(r);
 area2(&r);
    return 0;
}