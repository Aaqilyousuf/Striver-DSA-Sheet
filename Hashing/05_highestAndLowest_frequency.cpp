#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, maxFreq = 0, maxFreqEle = 0, minFreq = 1, minFreqEle = 0;
    cout<<"Enter the number of elemnts: ";
    cin>>n;
    int arr[n];
    map<int, int> hash;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        hash[arr[i]]++;
    }
    for(auto it1: hash){
        cout<<it1.first<<" --> "<<it1.second<<endl;
    }

    for(auto it: hash){
        if(it.second>maxFreq){
            maxFreq = it.second;
            maxFreqEle = it.first;
        }
        else{
            minFreq = it.second;
            minFreqEle = it.first;
        }
    }
    cout<<"Highest Frequency element in the arrray: "<<maxFreqEle<<" --> "<<maxFreq<<endl;
    cout<<"Lowest Frequency element in the arrray: "<<minFreqEle<<" --> "<<minFreq;
}