class Solution {
public:
    vector<int>dp;
    int f(vector<int>arr,int i){
        if(i==arr.size()-1) return arr[i]; // for  single house
        if(i==arr.size()-2) return max(arr[i],arr[i+1]); // for only 2 house present;
        return max(arr[i]+f(arr,i+2),0+f(arr,i+1));
    }
    int ftd(vector<int>arr,int i){
        if(i==arr.size()-1) return arr[i]; // for  single house
        if(i==arr.size()-2) return max(arr[i],arr[i+1]); // for only 2 house present;
        if(dp[i]!= -1) return dp[i];
        return dp[i]=max(arr[i]+ftd(arr,i+2),0+ftd(arr,i+1));
    }
    int rob(vector<int>& nums) {
        dp.resize(nums.size()+1,-1);
        return ftd(nums,0);
    }
};