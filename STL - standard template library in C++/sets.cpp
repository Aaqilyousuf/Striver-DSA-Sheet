#include<bits/stdc++.h>
using namespace std;

int main(){     
    //  everythig is in sorded order and everything is unique
    set<int> s;
   s.insert(1);
   s.insert(5);
   s.insert(7);
   s.insert(89);
   s.insert(45);
   s.emplace(43);

   //functionality of insert in vector can be also , that only increases thr efficiency
   //begin(), end(), rbegin(), rend(), size(), empty() and swap() are same as those of above

   auto it = s.find(3);

   auto it = s.find(6);

   s.erase(5);

   auto cnt = s.count(2); // occurance of elements

   auto it1 = s.find(1);
   auto it2 = s.find(89);
   s.erase(it1, it2);

    return 0;
}