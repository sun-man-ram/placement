// open 1 .png file for bettwe reference

#include<stdio.h>
#include<iostream>
using namespace std;
int main(){


    // creating and printing a character



    char temp;
    temp='a';
    // not temp='ab'
    // not temp=a;
    // not temp="a";
    // printf("%c\n",temp);
    printf("%d\n",temp);
    cout<<temp<<endl;


   // creating a array of character

  // mentioning the size

  char x[5]={'a','b','c','d','e'};

  //by not mentioning the size
  char a[]={'a','b','c','d'};

   char c[5]={'a','b'};

   char name[10]={'j','o','h','n'};
   for(char i:name){
    cout<<i<<endl;
   }
// observe terminal :)
//here i have to print only till where only string is getting printed 
// so i need to either have a end charcater or end of strring 
// i have \0
char ind[10]={'j','o','h','n','\0'};
for(char i:name){
    if(i!='\0'){
        cout<<i<<endl;
    }

}
for(char i:ind){
    if(i!='\0'){
        cout<<i<<endl;
    }
    
}
// see the difference


    return 0;
}