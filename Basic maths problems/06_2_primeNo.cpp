#include<iostream>
using namespace std;

int main(){
    int n, count = 0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i = 1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if((n%i)!=i){
                count++;
            }
        }
    }
    if(count == 2){
        cout<<"Prime number";
    }else cout<<"Not a prime number";
}