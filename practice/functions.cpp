#include<iostream>
#include<stdio.h>
using namespace std;
// int add(int a,int b){
//     int c=a+b;
//     return c;
// }
// int add(int *a,int *b){
//     int c=*a+*b;
//     return c;
// }
int add(int &a,int &b){
    int c=a+b;
    return c;
}
int main(){
    int a=1,b=2;
    int n;
    cout<<"enter value of n "<<endl;
    cin>>n;
   cout<<add(a,b)<<endl;
    
    return 0;
}