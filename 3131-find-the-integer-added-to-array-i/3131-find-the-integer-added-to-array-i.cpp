class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());

        sort(nums2.begin(),nums2.end());
        
        int mn1=*min_element(nums1.begin(),nums1.end());
        int mn2=*min_element(nums2.begin(),nums2.end());
        int x=mn2-mn1;
        return x;
    }
};