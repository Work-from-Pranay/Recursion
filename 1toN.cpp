void recursiveFunction(int x, vector<int>& ans) {
    if(x == 0) {
        return;
    }
    
    // Call recursive function
    recursiveFunction(x - 1, ans);
    
    // Insert element in the array
    ans.push_back(x);
}

vector<int> printNos(int x) {
    // Declaring empty integer array
    vector<int> ans;
    
    // Calling recursive function
    recursiveFunction(x, ans);
    
    return ans;
}
