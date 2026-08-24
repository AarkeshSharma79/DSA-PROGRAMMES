class Solution {
public:
    int rev(int nums){
        int sum=0;
        while(nums>0){
            int a=nums%10;
            sum=sum*10+a;
            nums/=10;
        }
        return sum;
    }
    int countNicePairs(vector<int>& nums) {
    //     int n=nums.size();
    //     int count=0;
    //     for(int i=0;i<n-1;i++){
    //         for(int j=i+1;j<n;j++){
    //             if(nums[i]+rev(nums[j])==nums[j] +rev(nums[i]))
    //             count++;
    //         }
    //     }
    //     return count;

        // using hashmap
        unordered_map<int,int>m;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]-rev(nums[i]);
        }
        for(int i=0;i<n;i++){
            if(m.find(nums[i])!=m.end()){
                count=count%1000000007;
                count+=m[nums[i]];
                m[nums[i]]++;
            }
            else m[nums[i]]++;
        }
        return count%1000000007;

    }
};