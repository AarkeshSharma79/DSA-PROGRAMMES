class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
     int n=nums.size();
     int i=0;
     int j=0;
     int maxlen=INT_MIN;
     int len=0;
     int flip=0;
     while(j<n)
    {
        if(nums[j]==1) j++;
        else // else nums[j]==0 
        {
            if(flip<k)
            {
                flip++;
                j++;
            }
            else{// flip==k;
                len=j-i;
                maxlen=max(maxlen,len);
                while(nums[i]==1) i++;// after this 100% nums[i]=0;
                i++;
                j++;
            }
        }
    }
     len=j-i;
     maxlen=max(maxlen,len);
    return maxlen;
    }
};