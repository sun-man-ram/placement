#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
void fun(int a[],int n){
   a[0]=87;
   display(a,n);
}
// returning array as pointer 
int * fun1(int n){
    int *p;
    p=new int[5];
    for(int i=0;i<n;i++){
        p[i]=2*i+1;
    }
    return p;
}
int main(){

   int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(int);
    cout<<n<<endl;
   fun(a,n);
   display(a,n);
   int *ptr,size=5;
   ptr=fun1(size);
   display(ptr,5);
   
    return 0;
}