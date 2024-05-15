#include<iostream>
using namespace std;

void bs(int arr[], int n){
    if(n==1) return;

    for(int j = 0; j<=n-2;j++){
        if(arr[j]> arr[j+1]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
    }
    bs(arr, n-1);
}

int main(){
    int n;
    cout<<"Enter number of elemnts: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements: ";
    for(int i = 0; i<n;i++){
        cin>>arr[i];
    }
    bs(arr, n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}