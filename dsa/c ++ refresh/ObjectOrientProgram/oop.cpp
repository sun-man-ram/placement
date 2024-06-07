#include<stdio.h>
#include<iostream>
using namespace std;
// using this we are aiming to convert this program into oop based program


/*
object orient have 
x properties 
and 
their methods


the object whihc is created in main function need to call the method like r.method()
to get its services 


here the object oriented programming is implemented in structure and havng methods in it 
this is monolithic programming way implementation of object oriented programming 


if i rename struct with class then i get lot of erros :)
becuase class is private but struct is public we need to keep specifcally public 
for class

*/
struct rectangle

{
  int length;
  int breadth;

// here all area and per functions are working for a structure then wh they 
// need to write outside structure write them inside the structure :)
void initialise(int l,int b)
{
    length=l;
    breadth=b;
}
int area(){
    return length*breadth;
}
int per(){
    return 2*(length+breadth);
}
};
int main(){
     int l,b;
    rectangle r={14,15};
    //assignment is to write a initialise code
    cin>>l>>b;
    // r.initialise(l,b);

    // cin>>r.length>>r.breadth;
    int t=r.area();
    int t2=r.per();
     cout<<t<<endl<<t2<<endl;
    return 0;
}