#include<iostream>
using namespace std;

void pattern_15(int n){
    for(int i=1;i<=n;i++){
        for(char ch = 'A'; ch<= 'A' + (n-i); ch++){
            cout<<ch;
        }
        cout<<endl;
    }

}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    pattern_15(n);
    return 0;
}