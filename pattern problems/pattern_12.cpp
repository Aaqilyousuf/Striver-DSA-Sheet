#include<iostream>
using namespace std;

void pattern_12(int n){
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){    //number
        cout<<j;
        }
        for(int j=1;j<=2*(n-i);j++){
          //spaces
        cout<<" ";
        }    
        
        for(int j = i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    pattern_12(n);

    return 0;
}