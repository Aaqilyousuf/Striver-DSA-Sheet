#include<iostream>
using namespace std;

void pattern_14(int n){
    for(int i=0;i<=n;i++){
        for(char j = 'A'; j<= 'A'+i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    pattern_14(n);
    return 0;
}