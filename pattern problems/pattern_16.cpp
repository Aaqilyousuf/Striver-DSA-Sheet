#include<iostream>
using namespace std;

void pattern_16(int n){
    for(int i = 0;i<=n;i++){
        char ch = 'A' + i;
        for(int j = 0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    pattern_16(n);
    return 0;
}