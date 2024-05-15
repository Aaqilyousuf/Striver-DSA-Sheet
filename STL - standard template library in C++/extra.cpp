#include<bits/stdc++.h>
using namespace std;

int main(){     
    int num = 7;
    int cnt = __builtin_popcount(num);
    cout<<cnt<<endl;

    long long num1 = 1228312318287;
    int cnt1 = __builtin_popcountll(num1);
    cout<<cnt1<<endl;

    string s = "123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
    return 0;
}