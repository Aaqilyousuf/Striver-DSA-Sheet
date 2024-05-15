#include<iostream>
using namespace std;

int main(){
    int n;
    std::cout<<"Enter a number: ";
    cin>>n;
    int count = 0;
    while (n>0)
    {
        count++;
        n = n /10;
    }
    std::cout<< "The number of digits: "<< count;
    
    
    return 0;
}