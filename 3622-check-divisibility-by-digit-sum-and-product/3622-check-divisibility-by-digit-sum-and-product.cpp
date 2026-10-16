class Solution {
public:
    bool checkDivisibility(int n) {
       int p=1;
       int m=n;
       int sum=0;
       while(n>0){
        int a=n%10;
        sum+=a;
        p*=a;
        n/=10;
       }
       if(m%(p+sum)==0) return true;
       else return false;
    }
};