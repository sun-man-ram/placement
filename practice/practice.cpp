#include<iostream>
#include<stdio.h>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};

// call by value
int getLength(rectangle r){
   cout<<r.length<<endl;
}
int getLength1(rectangle &a){
    cout<<a.length<<endl;
}
int getLength(rectangle *r){
    cout<<r->length<<endl;
}

int fun(int a){
    a++;
    return a;
}
int fun(int *a){
    // int 
    cout<<(*a)<<endl;
    (*a)++;
    return *a;
}
int fun1(int &a){
    a++;
    return a;
}











int main(){
    /*
    rectangle r={10,5};
     getLength(r);
     getLength1(r);
     getLength(&r);
     rectangle &t=r;
      getLength(t);
     getLength1(t);
     getLength(&t);

     */

  int a=10;
    cout<<fun(a)<<endl;
    cout<<fun(&a)<<endl;
    cout<<fun1(a)<<endl;




    return 0;
}