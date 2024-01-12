// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int func(int i,int s,int sum,int arr[],int n){
    if(i==n){
        if(s==sum){
            return 1;
        }   
        return 0;
    }
    s+=arr[i];
    int l=func(i+1,s,sum,arr,n);
    
    s-=arr[i];
    int r=func(i+1,s,sum,arr,n);
    
    return l+r;
}

int main() {
    int arr[]={3,4,7,2,3,9};
    int sum=9;
    int n=6;
    cout<<func(0,0,sum,arr,n);

    return 0;
}
