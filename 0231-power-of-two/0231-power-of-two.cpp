class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<=31;i++)
        {
            long long x=pow(2,i);
        if(x==n) return true;
        if(x>n) return false;
        }
        return false;
    }
};