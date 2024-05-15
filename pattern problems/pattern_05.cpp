#include<iostream>
using namespace std;

void pattern_05(int n){
    for(int i = 1;i<=n;i++){
        for(int j = 1; j<=n-i+1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    pattern_05(n);
    return 0;
}