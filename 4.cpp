//Write a function to count the number of digits in a number and then print the square of this n
#include<iostream>
using namespace std;
int noofdigit(int n){
    int count =1;
    while(n>0){
        if(n=n/10)  count++;
    }
    cout<<count*count;
}
int main(){
    int x;
    cin>>x;
    noofdigit(x);
}
