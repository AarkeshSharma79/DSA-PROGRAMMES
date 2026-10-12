class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0;
        int y=x;
        while(x>0){
            int r=x%10;
            sum+=r;
            x/=10;
        }
        return y%sum==0 ? sum:-1;
    }
};