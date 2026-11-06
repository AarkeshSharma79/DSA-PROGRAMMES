class Solution {
public:
    int Reverse(int m){
        int rev=0;
        while(m>0){
            int a=m%10;
            rev=rev*10+a;
            m/=10;
        }
        return rev;
    }
    bool sumOfNumberAndReverse(int num) {
        for(int i=0;i<=num;i++){
            if(i+Reverse(i)==num) return true;
        }
        return false;
    }
};