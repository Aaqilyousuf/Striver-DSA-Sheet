#include<bits/stdc++.h>
using namespace std;

int main(){                      //LIFO - LAST IN FIRST OUT
    stack<int> st;
    st.push(78);
    st.push(89);
    st.push(34);
    st.push(14);
    st.emplace(67);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    stack<int> st1;
    st1.swap(st);
    cout<<st.empty();
    
    
    // for(int ff: st){
    //     cout<<ff<<" ";
    // }
}