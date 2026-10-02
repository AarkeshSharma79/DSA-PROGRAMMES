class Solution {
public:
    void parenthesis(vector<string>&ans,string str,int opening,int closing, int n)
{
    if(closing==n)
    {
        ans.push_back(str);
        return;
    }
    if(opening<n)
    parenthesis(ans,str+"(",opening+1,closing,n);
    if(closing<opening)
    parenthesis(ans,str+")",opening,closing+1,n);
}

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        parenthesis(ans,"",0,0,n);
        return ans;
    }
};