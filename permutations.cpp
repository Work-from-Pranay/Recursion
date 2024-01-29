// Online C compiler to run C program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void helper(vector<int> &arr,vector<int> &ds,int freq[],vector<vector<int>> &ans){
    if(ds.size()==arr.size()){
        ans.push_back(ds);
        return;
    }
    for(int i=0;i<arr.size();i++){
        if(!freq[i]){
            ds.push_back(arr[i]);
            freq[i]=1;
            helper(arr,ds,freq,ans);
            freq[i]=0;
            ds.pop_back();
        }
    }
}

vector<vector<int>> permu(vector<int> arr){
    vector<vector<int>> ans;
    vector<int> ds;
    int freq[arr.size()];
    for(int i=0;i<arr.size();i++){
        freq[i]=0;
    }
    helper(arr,ds,freq,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return ans;
}
int main() {
    vector<int> arr{3,2,1};
    permu(arr);

    return 0;
}
