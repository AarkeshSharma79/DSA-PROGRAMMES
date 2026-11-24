class Solution {
public:
    int cntsetbit(int n){
        int cnt=0;
        while(n>0){
            int a=n%2;
            if(a==1) cnt++;
            n/=2;
        }
        return cnt;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int cnt=cntsetbit(i);
            if(cnt==k){
                sum+=nums[i];
            }
        }
        return sum;
    }
};