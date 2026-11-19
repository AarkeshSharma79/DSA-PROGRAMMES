// class Solution {
// public:
//     int divide(int dividend, int divisor) {
        // long long count=0;
        // long long a=dividend;
        // long long  b=divisor;
        // if((a>0&&b>0)||(a<0&&b<0)){
        // while(a>=b)
        // {
        //     a=a-b;
        //     count++;
        // }
        // return count;}
        // else{
        //     a=abs(a);
        //     b=abs(b);
        //      int sign=-1;
        //     while(a>=b)
        //     {
        //        a=a-b;
        //        count++ ;
        //     }
        //     return(sign*count);
        // }
        // return 0;
        //  it is correct but it more time 
    
        // // Division by zero
        // if (divisor == 0) return INT_MAX;

        // // Overflow case
        // if (dividend == INT_MIN && divisor == -1)
        //     return INT_MAX;

        // long long a = llabs(dividend);
        // long long b = llabs(divisor);

        //  long long count = 0;
        // while (a >= b) {
        //     a -= b;
        //     count++;
        // }

        // // Determine sign
        // if ((dividend < 0) ^ (divisor < 0))
        //     count = -count;

        // return count;
        class Solution {
public:
    int divide(int dividend, int divisor) {

        if (divisor == 0) return INT_MAX;

        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long a = llabs((long long)dividend);
        long long b = llabs((long long)divisor);

        long long count = 0;

        while (a >= b) {
            long long temp = b;
            long long multiple = 1;

            while (a >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }

            a -= temp;
            count += multiple;
        }

        if ((dividend < 0) ^ (divisor < 0))
            count = -count;

        return (int)count;
    }
};
   // }
//};
