#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> li;
    li.push_back(78);
    li.emplace_back(89);
    li.push_front(34);
    li.emplace_back(14);
    
    for(int ff: li){
        cout<<ff<<" ";
    }
}