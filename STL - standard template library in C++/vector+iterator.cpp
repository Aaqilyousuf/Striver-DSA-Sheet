#include<bits/stdc++.h>
using namespace std;
void vectors();


int main(){
    vectors();
    return 0;
}

void vectors(){
    vector<int> v = {8,4,3,2,19,78,34};
    vector<int>::iterator it = v.begin();  //begins point to first elements address not value
    it++; //it iterate to second value
    cout<< *(it)<<" ";


    vector<int>::iterator it1 = v.end(); //it point to last's next vallue which me null we iterate backward like it1--
    vector<int>::reverse_iterator it2 = v.rbegin(); // rbegin is same as end but we iterate forward like it++ 
    vector<int>::reverse_iterator it3 = v.rend(); // rend is same as begin but we iterate to backward like it-- 

    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" ";

    //Three method to printing elemnt in vector using itertaor

    for(vector<int>::iterator it4 = v.begin(); it4!=v.end();it4++){
        cout<<*(it4)<<" ";
    }

    for(auto it5 = v.begin(); it5!=v.end(); it5++){
        cout<<*(it5)<<" ";
    }

    for(auto it6: v){
        cout<<it6;
    }


}