#include<iostream>
using namespace std;

long long fn(int n){
    if(n<=1){
        return n;
    }
    long long last = fn(n-1);
    long long first = fn(n-2);
    return last + first;
}

int main(){
    int n;
    cout<<"Enter which index number you want: ";
    cin>>n;
    long long result = fn(n);
    cout<<result<<" ";
    return 0;
}