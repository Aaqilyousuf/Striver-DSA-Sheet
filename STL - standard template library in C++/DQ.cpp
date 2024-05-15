#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(78);
    dq.emplace_back(89);
    dq.push_front(34);
    dq.emplace_back(14);
    
    for(int ff: dq){
        cout<<ff<<" ";
    }
}