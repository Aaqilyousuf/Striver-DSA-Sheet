#include<iostream>
using namespace std;

int fn(int n){
    if (n==0)
    {
        return 1;
    }
    return n * fn(n-1);
    
    
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int result = fn(n);
    cout<<result;
    return 0;
}