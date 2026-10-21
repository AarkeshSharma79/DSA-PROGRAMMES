class Solution {
public:
    int Rev(int n){
        int rev=0;
        while(n>0){
            int x=n%10;
            rev=rev*10+x;
            n/=10;
        }
        return rev;
    }
    bool isSameAfterReversals(int num) {
        int ori=num;
       int r1=Rev(num);
       int r2=Rev(r1);
       if(r2==ori) return true;
       else  return false;
    }
};