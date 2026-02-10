class Solution {
public:
    int addDigits(int num) {
    int n=num;
    int sum=0;
    while(n>0)
    {
        sum=sum+n%10;
        n/=10;
    }
    if(sum<10)
    return sum;
    else{
        return addDigits(sum);
    }
    }
};