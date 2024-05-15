#include<iostream>
using namespace std;

int pivot(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<=j){
        while(arr[i]<=pivot && i<= high){
            i++;
        }
        while(arr[j]>pivot && j>=low){
            j--;
        }
        if(i<=j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(int arr[], int low, int high){
    if(low<high){
        int p = pivot(arr, low, high);
        qs(arr, low, p-1);
        qs(arr, p+1, high);
    }
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
    qs(arr, 0, n-1);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}