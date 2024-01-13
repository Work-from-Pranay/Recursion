#include<vector>

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}


vector<long long> factorialNumbers(long long n) {
    vector <long long> ans;
    ans.push_back(fact(n));
    return ans;
}
