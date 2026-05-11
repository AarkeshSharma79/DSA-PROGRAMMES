class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int temp=nums[i];
            vector<int>digit;
            while(temp>0)
            {
                int r=temp%10;
                digit.push_back(r);
                temp=temp/10;
            }
            reverse(digit.begin(),digit.end());
             for(int x : digit)
            {
                ans.push_back(x);
            }
        }
        return ans;
    }
};