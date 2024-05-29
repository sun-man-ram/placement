#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int add(int a,int b)
{
    // here a and b are formal parameters
  int c;
  c=a+b;

  return c;
}
int main(){
   int num1=10,num2=15,sum;
   sum=add(num1,num2);
  //num 1 and num2 are actual parameters
   cout<<"sum is "<<sum;
   return 0;
}