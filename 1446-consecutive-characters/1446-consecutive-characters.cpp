class Solution {
public:
    int maxPower(string s) {
        int n=s.size();
        int ct=1;
        int ans=1;
        int t=0;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                ct++;
                t=max(t,ct);
            }
            else {
                ct=1;
            }
        }
        if(t>ans) return t;
        return ans;
    }
};