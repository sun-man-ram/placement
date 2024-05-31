#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int *p;
    p=arr;
    // for(int i=0;i<sizeof(arr);i++){
    //     cout<<arr[i]<<endl;
    // }
    for(int j=0;j<5;j++){
        cout<<p[j]<<endl;
    }
//     int a[5]={2,4,6,8,10};
//    int *p;
//    p=a;
//    cout<<p<<endl;
//    cout<<*p<<endl;
//    for(int i=0;i<5;i++){
//     cout<<p[i]<<endl;
//    }
    return 0;
}