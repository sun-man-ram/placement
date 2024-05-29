#include<stdio.h>
#include<iostream>
using namespace std;
// nickname is called call by reference :)
//how a function is abkle to change the variables of other unction
// bcoz the function is inside of other variable
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main(){

   int p=1,q=0;
   swap(p,q);
   cout<<p<<endl;
   cout<<q<<endl;

    return 0;
}