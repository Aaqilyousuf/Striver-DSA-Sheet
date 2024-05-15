#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elments: ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cout<<"Enter "<<i<<" element: ";
        cin>>arr[i];
    }
    int min,temp;
    for(int i = 0;i<=n-2;i++){
        min = i;
        for(int j = i;j<=n-1;j++){
            if(arr[j]< arr[min]){
                temp = arr[j];
                arr[j] = arr[min];
                arr[min] = temp;
            }
        }
    }
    for(int i = 0 ;i < n; i++){
        cout<<arr[i]<<" ";
    }
}