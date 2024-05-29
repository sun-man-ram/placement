#include<stdio.h>
#include<iostream>
using namespace std;
// this is call by addressssssss 
//they take pointers 
//here we can acttually change the values
void swap(int *p,int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
int main(){
   int a=1,b=0;
   cout<<a<<endl<<b<<endl;
   swap(&a,&b);
   cout<<a<<endl<<b<<endl;
    
    return 0;
}
