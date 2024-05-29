#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
   int a=10;
   //declaring refrence.reference is nothing but a another name of other variable using in
   //parameter passing
   int &r=a;
   //declaration need to be done simltaneously
  int b=25;
  r=b;
 cout<<r<<endl;
    return 0;
}