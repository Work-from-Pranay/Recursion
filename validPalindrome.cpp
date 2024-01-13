//recursion

bool helper(string& str,int i){
    int n=str.size();
    if(i>=n/2){
        return true;
    }
    if(str[i]!=str[n-1-i]){
        return false;
    }
    return helper(str,i+1);
}

bool isPalindrome(string& str) {
    helper(str,0);
}





//normally
class Solution {
public:
    char toLowerCase(char ch) {
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
    }
    bool valid(char ch){
        if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
            return true;
        }
        return false;
    }
    bool checkPalindrome(string a) {
    int s = 0;
    int e = a.length()-1;

    while(s<=e) {
        if(a[s] != a[e])
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
    }
    bool isPalindrome(string s) {
        string temp="";
        
        for(int j=0;j<s.length();j++){
            if(valid(s[j])){
            temp.push_back(s[j]);
            }
        }

        for(int i=0;i<temp.length();i++){
            temp[i]=toLowerCase(temp[i]);
        }
        return checkPalindrome(temp);

    }
};
