#include<iostream>
using namespace std;

void pattern_20(int n){
for(int i = 1;i<=n;i++){
    for(int j = 1; j<=i; j++){
        cout<<"*";
    }
    for(int j = 1; j<=(2*n)-(i*2); j++){
        cout<<" ";
    }
    for(int j = 1; j<=i; j++){
        cout<<"*";
    }
    cout<<endl;   
}
for(int i = 1; i<=n;i++){
    for(int j = 1; j<=n-i; j++){
        cout<<"*";
    }
    for(int j = 1; j<=2*i; j++){
        cout<<" ";
    }
    for(int j = 1; j<=n-i; j++){
        cout<<"*";
    }
    cout<<endl;
}


}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    pattern_20(n);
    return 0;

}