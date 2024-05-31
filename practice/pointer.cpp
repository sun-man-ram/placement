#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){
    int a=10;
    // declaration of pointers
    int *p;
    p=&a;
    cout<<&p<<endl<<p<<endl<<*p<<endl<<endl<<a<<endl<<&a<<endl;
    return 0;
}