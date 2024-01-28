void helper(int index,int target,vector<int> &arr,vector<vector<int>> &ans,
            vector<int> &ds){
                
        if(index==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        
        if(arr[index]<=target){
            ds.push_back(arr[index]);
            helper(index,target-arr[index],arr,ans,ds);
            ds.pop_back();
        }
        helper(index+1,target,arr,ans,ds);
    
}


vector<vector<int>> combSum(vector<int> &ARR, int B)
{
    vector<vector<int>> ans;
        vector<int> ds;
        helper(0,B,ARR,ans,ds);
        return ans;
    //  ans.empty();        
}
