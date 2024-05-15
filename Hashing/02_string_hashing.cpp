#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    //pre calculate

    int hash[256] = {0};
    for(int i = 0 ;i<s.size();i++){
        hash[s[i]]++;
    }
    int q;
    cout<<"Enter number of queries: ";
    cin>>q;

    while(q--){
        char c;
        cout<<"Enter the character: ";
        cin>>c;
        cout<<hash[c]<<endl;
    }

}