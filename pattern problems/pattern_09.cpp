#include<iostream>
using namespace std;

void pattern_10(int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j = 0;j<2*i+1; j++){
            cout<<"*";
        }
        for(int j = 0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n - (2*i+1);j++){
            if(j<9) continue;
            cout<<"*";
        }
        for(int j = 0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    pattern_10(n);
    return 0;
}