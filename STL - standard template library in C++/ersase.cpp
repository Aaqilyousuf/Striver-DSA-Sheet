#include<bits/stdc++.h>
using namespace std;
void vectors();


int main(){
    vectors();
    return 0;
}

void vectors(){
    vector<int> v = {9,6,8,19};
    v.push_back(3);
    v.emplace_back(89);

    v.erase(v.begin()+2);
    v.erase(v.begin(), v.begin()+4);

    for(auto it: v){
        cout<<it<<" ";
    }
    
    

    


}