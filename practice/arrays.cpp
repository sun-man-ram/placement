#include<stdio.h>
#include<iostream>
using namespace std;
// arrays and input and output :)

int main(){
    int a[5];
    a[0]=0;
     for(int i=0;i<5;i++){
        a[i]=2*i+1;
        cout<<a[i]<<endl;
     }
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"value of n is "<<n<<endl;
    return 0;
}