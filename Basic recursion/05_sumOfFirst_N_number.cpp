#include<iostream>
using namespace std;

void fn(int n, int sum){
    if (n<0)
    {
        cout<<sum;
        return;
    }
    fn(n-1,sum+n);
    
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    fn(n,0);
    return 0;
}