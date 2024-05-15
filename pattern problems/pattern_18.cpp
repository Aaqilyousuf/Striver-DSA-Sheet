#include<iostream>
using namespace std;

void pattern_14(int n){
    for(int i=0;i<n;i++){
        for(char j = 'A'+n-1; j>='A'+i; j--){

            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern_14_II(int n){
    for(int i=0;i<n;i++){
        for(char j = ('A'+n-1)-i; j<=('A'+n-1); j++){
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
    cout<<endl;
    pattern_14_II(n);
    return 0;
} 
