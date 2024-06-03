#include<iostream>
#include<stdio.h>
using namespace std;

template <class T>

class Arithmetic
{
 private:
 T a;
 T b;
 public:
  Arithmetic(int a,int b);

 // i want to implement this functions outside so i need declarations outisde
int add();
int sub();

};
 
// here i want to implement this functions :) so i need to show their scope 
template <class T>
  Arithmetic::Arithmetic(int a,int b){
    this->a=a;
    this->b=b;
 }
 
 int Arithmetic::add(){
    int c;
    c=a+b;
    return c;
 }

 int Arithmetic::sub(){
    int c;
    c=a-b;
    return c;
 }

int main(){

  Arithmetic ar(10,5);
  cout<<"add  "<<ar.add()<<endl;
  cout<<"sub  "<<ar.sub()<<endl;
    return 0;
}