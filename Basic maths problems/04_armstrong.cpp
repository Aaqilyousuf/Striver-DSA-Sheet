#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int temp = n;
    int armstrong = 0; 
    while(n>0){
        int digit = n % 10;
        armstrong = armstrong + (digit*digit*digit);
        n = n /10; 
    }
    if(armstrong == temp){
        cout<<"Armstrong";
    }else cout<<"Not armstrong";
    return 0;
}