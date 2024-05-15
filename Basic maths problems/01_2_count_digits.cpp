#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    std::cout<<"Enter a number: ";
    cin>>n;
    int op = (int) (log10(n) + 1);
    
    std::cout<< "The number of digits: "<< op;
    
    
    return 0;
}