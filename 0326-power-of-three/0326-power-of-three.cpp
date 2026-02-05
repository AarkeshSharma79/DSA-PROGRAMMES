class Solution {
public:
    bool isPowerOfThree(int n) {
        for(int i=0;i<=1291;i++)
        {
            long long x=pow(3,i);
            if(x==n) return true;
            if(x>n) return false;
        }
        return false;
    }
};