#include<iostream>
using namespace std;

int main(){
    int n;
     cout<<"Enter a number: ";
     cin>>n;
     cout<<"The divisor of "<< n<<endl;
     for(int i = 1; i<=n/2; i++){
        if(n%i == 0){
            cout<<i<<" ";
        }
     }
     cout<<n<<"";
     return 0;
}