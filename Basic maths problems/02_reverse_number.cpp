#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int reverse = 0;
    while(n>0){
        int digit = n %10;
        reverse = digit + reverse*10;
        n = n/10;  
    }
    cout<<"Reverse of that number: "<<reverse;
    return 0;
}