#include<bits/stdc++.h>
using namespace std;

int main(){                      //FIFO - FIRST IN FIRST OUT
    queue<int> q;
    q.push(18);
    q.push(89);
    q.push(34);
    q.push(14);
    q.emplace(67);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    return 0;
}