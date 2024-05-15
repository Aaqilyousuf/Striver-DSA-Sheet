#include<bits/stdc++.h>
using namespace std;
void vectors();


int main(){
    vectors();
    return 0;
}

void vectors(){
    vector<int> v;
    v.push_back(3);
    v.emplace_back(89);
    
    vector<pair<int, int>> vec;

    vec.push_back({5,8});
    vec.emplace_back(7,9);

    vector<int> a(5,100);

    vector<int> b(6);

    vector<int> v1(7,20);
    vector<int> v2(v1);
    for(int i: v2){
        cout<<i<<" ";
    }

    


}