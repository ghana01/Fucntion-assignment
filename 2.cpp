//Write a function that takes the radius of a circle as an argument and returns its area.
#include<iostream>
using namespace std;
  int area(int r){
    int A=3.14*r*r;
    cout<<A;
  }
int main(){
    int x;
    cout<<"Enter the value of radius"<<endl;
    cin>>x;
    area(x);
}