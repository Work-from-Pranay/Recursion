#include<bits/stdc++.h>
class Solution{
    public:
    vector<string> result;
    void solve(int i,int j,vector<vector<int>>&maze,int n,string& path){
        if(i<0||i>=n || j<0||j>=n ||maze[i][j]==0){
            return;
        }
        if(i==n-1&&j==n-1){
            result.push_back(path);
            return;
        }
    
        maze[i][j]=0;
        path.push_back('L');
        solve(i,j-1,maze,n,path);
        path.pop_back();
        
        path.push_back('R');
        solve(i,j+1,maze,n,path);
        path.pop_back();
        
        path.push_back('D');
        solve(i+1,j,maze,n,path);
        path.pop_back();
        
        path.push_back('U');
        solve(i-1,j,maze,n,path);
        path.pop_back();
        
        maze[i][j]=1;
    }
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        string path = "";
        
        solve(0,0,m,n,path);
        return result;
    }
};
