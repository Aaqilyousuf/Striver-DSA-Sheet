#include<bits/stdc++.h>
using namespace std;

int main(){                      //FIFO - FIRST IN FIRST OUT  in priority queue the queue elements are arranged in accending order
    priority_queue<int> pq;
    pq.push(18);
    pq.push(89);
    pq.push(34);
    pq.push(14);
    pq.emplace(67);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;



    //minimum heap in this element are arranged in descending order

    priority_queue<int, vector<int>, greater<int>> pq1;
    pq.push(83);
    pq.push(34);
    pq.push(99);
    pq.push(2);
    pq.push(5);
    cout<<pq1.top()<<endl;
    pq1.pop();
    cout<<pq1.top()<<endl;

    return 0;
}