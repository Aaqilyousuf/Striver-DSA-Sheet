#include<bits/stdc++.h>
using namespace std;
void vectors();


int main(){
    vectors();
    return 0;
}

void vectors(){
    vector<int> v = {9,6,8,19};
    v.insert(v.begin(),77);
    v.insert(v.begin()+1, 2, 10); //two time 10 will come after first element
    vector<int> copy(2,50); 

    v.insert(v.begin(), copy.begin(), copy.end());


for(auto it: v){
        cout<<it<<" ";
    }
    cout<< v.size();
    vector<int> v2;
    v.swap(v2);

    
    
}