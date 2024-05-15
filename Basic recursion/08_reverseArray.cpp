#include<iostream>
using namespace std;

void fn(int i, int arr[], int n){
    if( i >= n) return;
    swap(arr[i], arr[n-i-1]);
    fn(i+1,arr,n-1);
}

int main(){
    int n;
    cout<<"Enter number of elemnts: ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    fn(0, arr, n);
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
}