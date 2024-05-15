#include<iostream>
using namespace std;

void print(int n, int count){
    if(count > n){
        return;
    }
    cout<<"ABCDEFG"<<" ";
    
    print(n, ++count);
}

int main(){
    int n, count = 0;
    cout<<"How many times you want to print: ";
    cin>>n;
    print(n, count);
    return 0;
}