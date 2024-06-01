#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
// a function should take array as parameter
// arraya are always passed only by address
// for gods sake this is an array not a pointer
// so u need to send size along with array 
// as the arrays are passed as pointer the function can directly access the arry 
void fun(int a[ ],int size){
   a[0]=0;
   // for each loop cant be used for a pointer 
  // for(int i:a){
  //  cout<<i<<endl;
  // }
  for(int i=0;i<5;i++){
    cout<<a[i];
  }
}
int * fun1(int size)
{
  int *p;
  p=new int[size];
  for(int i=0;i<size;i++)
  {
    p[i]=i+1;
    
  }
  return p;
}
int main(){
  int a[]={2,3,4,5,6,7};
      int n=6;
      // for(int x:a){
      //   cout<<x<<endl;
      // }
      // fun(a,6);
      //   for(int x:a){
      //   cout<<x<<endl;
      // }

      int * ptr,sz=5;
      ptr=fun1(sz);
      for(int i=0;i<sz;i++){
        cout<<ptr[i]<<endl;
      }
    return 0;
}