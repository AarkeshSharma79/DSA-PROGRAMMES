class Solution {
public:
    void ReversePart(vector<int>& v,int a,int b)
{
    for(int i=a,j=b;i<=j;i++,j--)
    {
        int temp =v[i];
        v[i]= v[j];
        v[j]=temp;
    }
    return;

}
    void rotate(vector<int>& nums, int k) {
        int m=nums.size();
        k=k%m;
        ReversePart(nums,0,m-k-1);
        ReversePart(nums,m-k,m-1);
        ReversePart(nums,0,m-1);
    }
};