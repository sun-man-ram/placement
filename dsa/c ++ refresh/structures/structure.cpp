#include<iostream>
#include<stdio.h>


//including these two can give us access to write both c and c++ style

using namespace std;

struct rectangle
{
    int length;
    int breadth;
    char x;
};

struct rectangle r3;
// this is available for all the program




/*
struct rectangee
{
    int length;
    int bradth;

} r1,r2,r3;
*/


// equialent to writing struct rectangee r1,r2,r3
//padding did you remebr 
/*
the char takes four bites memory but it will use one byte memory
*/
int main(){
  struct rectangle r1;
  r1.length=10;
  r1.breadth=5;
 struct rectangle r2={10,4};
printf("%d\n",sizeof(r1));
printf("%lu\n",sizeof(r1));
cout<<r1.length<<endl;
cout<<r1.breadth<<endl;
}