#include<iostream>
using namespace std;

bool fn(int i, string &str){
    if(i >= str.size()/2) return true;

    if(str[i]!=str[str.size()-i-1]) return false;

    fn(i+1, str);
}

int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    bool result = fn(0, str);
    if(result == true) {
        cout<<str<<" is palindrome";
    }else cout<<str<<" is not palindrome";

    return 0;
}