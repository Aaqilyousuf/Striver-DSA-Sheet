#include<bits/stdc++.h>
using namespace std;
void pairs();

int main(){
    pairs();
    return 0;
}

void pairs(){
    pair<int, int> p = {4,8};
    cout<<p.first<<" "<<p.second;

    pair<int, pair<int, int>> g = {2, {7,3}};
    cout<<g.first<<" "<<g.second.first<<" "<<g.second.second;

    pair<int, int> arr[] = {{1,2},{4,3},{7,6}};
    cout<<arr[0].second<<" "<<arr[1].first;

}