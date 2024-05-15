#include<iostream>
using namespace std;

void pattern_13(int n){
    int inc = 1;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<inc<<" ";
            inc++;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    pattern_13(n);
    return 0;
}