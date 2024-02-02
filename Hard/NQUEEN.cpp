// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<bits/stdc++.h>

bool issafe(int row,int col,vector<string> &board,int n){
    int dr=row;
    int cl=col;
    
    while(row>=0 && col>=0){
        if(board[row][col]=='Q')return false;
        row--;
        col--;
    }
    
    col=cl;
    row=dr;
    while(col>=0){
        if(board[row][col]=='Q')return false;
        col--;
    }
    col=cl;
    row=dr;
    while(row<n && col>=0){
        if(board[row][col]=='Q')return false;
        row++;
        col--;
    }
    return true;
}

void helper(int col,vector<string> &board,vector<vector<string>> &ans,int n){
    if(col == n){
        ans.push_back(board);
        return;
    }
    for(int row=0;row<n;row++){
        if(issafe(row,col,board,n)){
            board[row][col]='Q';
            helper(col+1,board,ans,n);
            board[row][col]='.';
        }
    }
}


vector<vector<string>> nqueen(int n){
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n,'.');
    for(int i=0;i<n;i++){
        board[i]=s;
    }
    helper(0,board,ans,n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<endl;
        }
        cout<<endl;
    }
    return ans;
}

int main() {
    nqueen(5);
    return 0;
}
