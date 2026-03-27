class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(auto i:nums)
        {
            freq[i]++;
        }
        int maxoccurence=0;
        for(auto i: freq){
            maxoccurence=max(maxoccurence,i.second);
        }
        int ans=0;
        for(auto i:freq){
            if(i.second==maxoccurence) ans=ans+i.second;

        }
        return ans;
    }
};