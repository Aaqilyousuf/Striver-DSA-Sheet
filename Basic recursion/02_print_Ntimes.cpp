#include<iostream>
using namespace std;

void print(int n, int count){
    if(count > n){
        return;
    }
    cout<<count<<" ";
    print(n, ++count);
}

int main(){
    int n,count = 1;
    cout<<"Enter a number: ";
    cin>>n;
    print(n, count);
}