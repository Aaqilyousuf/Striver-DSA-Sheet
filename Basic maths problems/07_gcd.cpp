#include<iostream>
using namespace std;

int main(){
    int a,b,gcd;
    cout<<"Enter Two values: ";
    cin>>a>>b;
    for(int i = 1; i<= min(a,b);i++){
        if(min(a,b)%i == 0){
            gcd = 1;
        }
    }
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd;
    return 0;
}