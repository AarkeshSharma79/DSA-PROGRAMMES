class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                mp[nums[i]]++;
            }
        }
        int mx=0;
        int y=-1;
        for(auto x:mp){
            int m = x.first;
            int freq=x.second;
            if (freq > mx || (freq == mx && m < y)) {
                mx = freq;
                y = m;
        }
    }
        return y;
    }
};