#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct rectangle {
 int breadth; 
 int length;
};
int area(rectangle r){
    return (r.length*r.breadth);
}
int main(){
    
   rectangle r={100,230};
   cout<<area(r)<<endl;
    return 0;
}