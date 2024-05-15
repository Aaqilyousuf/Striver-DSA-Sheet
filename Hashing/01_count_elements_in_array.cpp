#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }

    //pre calculate
    int hash[100000] = {0};
    for(int i = 0; i<n;i++){
        hash[arr[i]] += 1;
    }

    int query;
    cout<<"Enter the query: ";
    cin>>query;
    while(query--){
        int number;
        cout<<"Enter the number: ";
        cin>>number;
        //fetch
        cout<<hash[number]+" Times"<<endl;
    }
    return 0;
}