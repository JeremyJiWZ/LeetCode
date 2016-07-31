class Solution {
private:
    int ll=0,maxLen=0;    
public:
    void extendPalindrome(string s, int l, int r){
        while(l>=0&&r<s.length()&&s[l]==s[r]){
            l--;
            r++;
        }
        if(r-l-1>maxLen){
            ll=l+1;
            maxLen=r-l-1;
        }
    }
    string longestPalindrome(string s) {
        int length=s.length();
        if(length<2) return s;
        
        for(int i=0;i<length-1;i++){
            extendPalindrome(s,i,i);
            extendPalindrome(s,i,i+1);
        }
        return s.substr(ll,maxLen);
    }
};