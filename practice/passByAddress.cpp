#include<stdio.h>
#include<iostream>
using namespace std;

void swap(int *a,int *b){
     int temp;
     temp=*a;
     *a=*b;
     *b=temp;

}
int main(){
  int a=25,b=30;
 swap(&a,&b);
 cout<<a<<"  "<<b<<endl;
    return 0;
}