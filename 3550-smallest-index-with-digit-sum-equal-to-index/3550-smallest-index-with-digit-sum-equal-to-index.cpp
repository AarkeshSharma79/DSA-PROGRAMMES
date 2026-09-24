class Solution {
public:
    int sumd(int n){
        int sum=0;
        int d=n;
        while(d>0){
            int a=d%10;
            sum+=a;
            d/=10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int s=sumd(nums[i]);
            if(i==s) {return i;
            break;}
        }
        return -1;
    }
};