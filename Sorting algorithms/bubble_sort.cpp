#include<iostream>
using namespace std;

void bubble_sort(int n, int arr[]){
    int didSwap = 0;
    for(int i = 0;i<n;i++){
        for(int j = i + 1; j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0){ // this is for if array is already in sorted then no need to go for next loop
            break;
        }
        cout<<"runs\n";
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter number of elments: ";
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cout<<"Enter "<<i<<" element: ";
        cin>>arr[i];
    }
    bubble_sort(n, arr);
}