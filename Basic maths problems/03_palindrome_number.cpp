#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int temp = n;
    int palindrome = 0;
    while(n>0){
        int digits = n %10;
        palindrome = digits + palindrome*10;
        n = n / 10;
    }
    if(palindrome == temp){
        cout<<"The given number is palindrome";
    }else cout<<"Not a palinderome!!!";

    return 0;
    
}