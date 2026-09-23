class Solution {
public:
    int countDigits(int num) {
        int n=num;
        int count=0;
        while(num>0){
            int a=num%10;
            if(n%a==0) count++;
            num/=10;
        }
        return count;
    }
};