class Solution {
public:
    int digitrange(int i){
        int mx=INT_MIN;
        int j=i;
        int mn=INT_MAX;
        while(i>0){
            int d=i%10;
            mx=max(mx,d);
            i/=10;
        }
        while(j>0){
            int m=j%10;
            mn=min(mn,m);
            j/=10;
        }
        return mx-mn;
    }
    int maxDigitRange(vector<int>& nums) {
         int maxR = -1;
        for (int i = 0; i < nums.size(); i++) {
            maxR = max(maxR, digitrange(nums[i]));
        }
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (digitrange(nums[i]) == maxR) {
                sum += nums[i];
            }
        }

        return sum;
    }
};