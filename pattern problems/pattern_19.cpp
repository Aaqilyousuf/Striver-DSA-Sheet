#include<iostream>
using namespace std;

void pattern_19(int n){
    for(int i = 1;i<=n;i++){
        //starts
        for(int j = 1; j<=(n+1)-i;j++){
            cout<<"*";
        }
        for(int j = 1; j<=2*(i-1); j++){
            cout<<" ";
        }
        for(int j = 1; j<=(n+1)-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 1;i<=n;i++){
        //starts
        for(int j = 1; j<=i;j++){
            cout<<"*";
        }
        for(int j = 1; j<=(2*n)-(i*2); j++){
            cout<<" ";
        }
        for(int j = 1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    pattern_19(n);
    return 0;
}