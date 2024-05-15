#include<iostream>
using namespace std;

void pattern_02(int n){

    for(int i = 0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    pattern_02(n);
return 0;
}