#include<bits/stdc++.h>
using namespace std;

void countNumber(int n, int arr[]){
    vector<bool> visited(n, false);

    for(int i = 0;i<n;i++){
        if(visited[i]==true){
            continue;
        }
        int count = 1;
        for(int j = i+1;j<n; j++){
            if(arr[i]==arr[j]){
                visited[j] = true;
                count++;
           }
        }
        cout<<arr[i]<<" --> "<<count<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    
    for(int i = 0;i<n;i++){
        cout<<"Enter element "<<i<<" : ";
        cin>>arr[i];
    }
    countNumber(n, arr);
}