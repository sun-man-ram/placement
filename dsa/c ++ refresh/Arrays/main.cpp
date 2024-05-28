#include<iostream>
using namespace std;
int main()
{
  int a[5];
  // declaring array
  a[0]=12;
  a[1]=15;
  a[2]=25;
  //printing size of array
  cout<<sizeof(a)<<endl;
  //priintg a specific value on a array
  cout<<a[1]<<endl;
  printf("%d\n",a[2]);
//initialising an array
int b[5]={2,4,6,8,9};
//prinitnng with for loop
for(int i=0;i<=4;i++){
    cout<<b[i]<<endl;
}
for(int x:b){
    cout<<x<<endl;
}

//defining the array and not giving values those values will have value 0



 int n;
 cout<<"enter size of array";
 cin>>n;
cout<<n<<endl;

    return 0;
}









/*


template for c++
#include<iostream>
using namespace std;
int main(){

    return 0;
}


*/