#include<iostream>
#include<stdio.h>
using namespace std;
int add(int a,int b){
// int c;
// c=a+b;
a++;
cout<<a<<endl;
return 0;
  

}
//here the actual value of a is not changing to change 
// we use using pointers or call by address or reference variable or uing call by reference
int main(){
  
   int num1=10,num2=15,sum;
   sum=add(num1,num2);
   
   cout<<num1<<endl;
   cout<<"Sum is "<<sum;
    
    return 0;
}