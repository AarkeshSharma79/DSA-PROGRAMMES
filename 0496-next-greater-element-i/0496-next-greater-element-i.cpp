class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                   int k = j + 1;

                while (k < m && nums2[k] <nums2[j]) {
                    k++;
                }

                if (k < m)
                    ans.push_back(nums2[k]);
                else
                    ans.push_back(-1);

                break;
                }
            }
        }
        return ans;
    }
};