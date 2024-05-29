#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
// initialising an pointer to an array and structure

struct rectangle
{
    int length;
    int breadth;
};


int main(){
   // this array is created in the stack and heap memory to access i need to use malloc function

   int a[5]={2,4,6,8,10};
   int *p;
   p=a;
   cout<<p<<endl;
   cout<<*p<<endl;
   for(int i=0;i<5;i++){
    cout<<p[i]<<endl;
   }

  //lets create a array in heap :)
  int *u;
//   u=(int *)malloc(5*sizeof(int));
// c++ way of doing this which is very simple :)
cout<<&u<<endl;
u=new int[5];
  for(int i=0;i<=4;i++){
    u[i]=i*3+1;
  }
 for(int i=0;i<=4;i++){
    cout<<u[i]<<endl;
 }
//  delete [] u;
  

 int *p1;
 char *p2;
 float *p3;
 double *p4;
 struct Rectabgle *p5;
cout<<sizeof(p1)<<endl;
cout<<sizeof(p2)<<endl;
cout<<sizeof(p3)<<endl;
cout<<sizeof(p4)<<endl;
cout<<sizeof(p5)<<endl;
//here all have 4 bytes but i was thinling 4,8 etc why 
//because it is just a pointer it is independent :)
    return 0;
}