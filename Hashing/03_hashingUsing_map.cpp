#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    map<long, long> hash;

    for(int i = 0;i<n;i++){
        cin>>arr[i];
        hash[arr[i]]++;
    }
    for(auto it:hash){
        cout<<it.first<<"-->"<<it.second<<endl;
    }

    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;

    while(q--){
        int number;
        cout<<"Enter the number: ";
        cin>>number;
        //fetching
        cout<<hash[number]<<endl;
    }
}