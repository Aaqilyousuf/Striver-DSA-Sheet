#include<iostream>
using namespace std;

void pattern_10(int n){
    for(int i = 1;i<=2*n-1;i++){
        int star = i;

        if(i>=n) star = 2*n-i;
        
        for(int j = 1;j<=star;j++){
            cout<<"*";
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