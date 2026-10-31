class Solution {
public:
    int baseSum(int n,int k){
        int sum=0;
        while(n>0){
            int a=n%k;
            sum+=a;
            n/=k;
        }
        return sum;
    }
    int sumBase(int n, int k) {
        return baseSum(n,k);
    }
};