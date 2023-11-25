//Write a function to print squares of first n natural numbers, taking n as argument to the function
#include<iostream>
using namespace std;
int squares(int n){
    for(int i=1;i<=n;i++){
        int sq=i*i;
        cout<<sq<<endl;
    }
}
int main(){
     int x;
     cin>>x;
     squares(x);

}