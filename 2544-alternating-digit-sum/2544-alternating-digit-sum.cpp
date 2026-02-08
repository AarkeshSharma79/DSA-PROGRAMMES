class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int>ans;
        int sum=0;
        while(n>0)
        {
            int r=n%10;
            ans.push_back(r);
            n=n/10;
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++)
        {
            if(i%2==0) sum+=ans[i];
            else sum-=ans[i];
        }
        return sum;
    }
};