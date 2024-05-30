#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
int a=10;
int *p;
p=&a;
cout<<a<<endl;
printf("using pointers %d and %d\n",p,&a);
//next line the address of a is printed
cout<<p<<endl;
//next line the value of p is printed
cout<<*p;
return 0;
}