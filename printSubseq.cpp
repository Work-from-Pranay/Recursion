// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

void func(int i,vector<int> &ds,int s,int sum,int arr[],int n){
    if(i==n){
        if(s==sum){
            for(auto it : ds)cout<<it<<" ";
            cout<<endl;
        }   
        return;
    }
    ds.push_back(arr[i]);
    s+=arr[i];
    func(i+1,ds,s,sum,arr,n);
    
    s-=arr[i];
    ds.pop_back();
    func(i+1,ds,s,sum,arr,n);
}

int main() {
    int arr[]={3,4,7,2,3,9};
    vector<int> ds;
    int sum=9;
    int n=6;
    func(0,ds,0,sum,arr,n);

    return 0;
}
