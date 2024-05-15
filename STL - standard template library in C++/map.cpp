#include<bits/stdc++.h>
using namespace std;

int main(){     
    //map store unique key in sorted order something similar to set <key, value>
    //<key, <value, value>>
    //<<key,key>,value>>
    map<int, int>mpp;
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp1;

    mpp[1] = 2;

    mpp.emplace(3,1);
    mpp.insert({2, 4});
    mpp1[{2,3}] = 10;  //{{2,3},10}
    /*{
        {1,2}
        {2,4}
        {3,1}
    }*/
    for(auto it: mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<< mpp[1]<<endl;
    cout<< mpp[5];

    auto it = mpp.find(3);
    // cout<<*(it).second<<endl;

    

    

   //functionality of insert in vector can be also , that only increases thr efficiency
   //begin(), end(), rbegin(), rend(), size(), empty() and swap() are same as those of above
    return 0;
}