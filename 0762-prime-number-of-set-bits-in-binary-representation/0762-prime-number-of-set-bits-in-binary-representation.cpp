class Solution {
public:
    bool isPrime(int n){
        int cnt=0;
        while(n>0){
            int a=n%2;
            if(a==1) cnt++;
            n/=2;
        }
        if (cnt <= 1) return false;

        for (int i = 2; i * i <= cnt; i++) {
            if (cnt % i == 0) {
                return false;
            }
        }

    return true;

    }
    int countPrimeSetBits(int l, int r) {
        int cnt=0;
        for(int i=l;i<=r;i++){
            if(isPrime(i)) cnt++;
        }
        return cnt;
    }
};