// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int low,int mid,int high){
    int l=low;
    int r=mid+1;
    vector<int> temp;
    while(l<=mid && r<=high){
        if(arr[l]<=arr[r]){
            temp.push_back(arr[l]);
            l++;
        }
        else{
            temp.push_back(arr[r]);
            r++;
        }
    }
    while(l<=mid){
        temp.push_back(arr[l]);
        l++;
    }
    while(r<=high){
        temp.push_back(arr[r]);
        r++;
    }
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}



void ms(vector<int> &arr,int low,int high){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main() {
    vector<int> arr{4,3,1,6};
    int n=4;
    ms(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

    return 0;
}
