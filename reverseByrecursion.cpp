void revhelper(int l,int r,vector<int> arr){
    if(l>=r){
        return;
    }
    int t=arr[l];
    arr[l]=arr[r];
    arr[r]=t;
    revhelper(l+1,r-1,arr);
}
