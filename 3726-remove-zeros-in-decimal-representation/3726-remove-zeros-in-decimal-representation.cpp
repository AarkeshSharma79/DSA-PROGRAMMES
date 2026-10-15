class Solution {
public:
    long long removeZeros(long long n) {
        string str=to_string(n);
        string ans="";
        for(int i=0;i<str.length();i++){
            if(str[i]!='0') ans+=str[i];
        }
        return ans.empty() ? 0 : stoll(ans);
    }
};