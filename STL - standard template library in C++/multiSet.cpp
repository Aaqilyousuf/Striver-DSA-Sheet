#include<bits/stdc++.h>
using namespace std;

int main(){     
    //  everythig is same as set and it can also stores duplicate elements also
    multiset<int>ms;
   ms.insert(1);
   ms.insert(1);
   ms.insert(2);
   ms.insert(2);
   ms.insert(3);
   ms.emplace(3);

   ms.erase(1); // it will erase all the occurance of one

   ms.erase(ms.find(1)); //it only erase single one because it point to address of first one so it only delete only one

   ms.erase(ms.find(1), ms.find(2));

   //functionality of insert in vector can be also , that only increases thr efficiency
   //begin(), end(), rbegin(), rend(), size(), empty() and swap() are same as those of above


    return 0;
}