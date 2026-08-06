class Solution {
public:
    int product(int n){
        int p=1;
        while(n){
            p*=n%10;
            n/=10;
        }
        return p;
    }
    int smallestNumber(int n, int t) {
        int num=product(n);
        while(num%t!=0){
            n++;
            num = product(n);
        }
        return n;
    }
};