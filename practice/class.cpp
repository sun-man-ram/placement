#include<stdio.h>
#include<iostream>
using namespace std;

class Human
{
  private:
  int ears;
  int mouth;
  public:
  Human(){
    this->ears=2;
    this->mouth=1;
  }
 
  int getEars(){
    return this->ears;
  }
  int getMouth(){
    return this->mouth;
  }
  void setEars(int n){
    this->ears=n;
  }
  void setMouth(int n){
    this->mouth=n;
  }
~Human(){
    cout<<""<<endl;
}
};

int main(){
   Human suman;
  cout<<(suman.getEars())<<endl;
  return 0;
}