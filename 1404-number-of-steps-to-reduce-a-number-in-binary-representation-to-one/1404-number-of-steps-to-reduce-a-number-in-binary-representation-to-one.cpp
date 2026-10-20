class Solution {
public:
    // int isDecimal(string s){
    //     int n=s.length();
    //     int p=1;
    //     int sum=0;
    //     for(int i=n-1;i>=0;i--){
    //         int m=s[i]-'0';
    //         sum+=m*p;
    //         p*=2;
    //     }
    //     return sum;
    // }
    // int numSteps(string s) {
    //     int num=isDecimal(s);
    //     int st=0;
    //     while(num>1){
    //         if(num%2==0){
    //             num=num/2;
    //         }
    //         else{
    //             num=num+1;
    //         }
    //         st++;
    //     }
    //     return st;
    // }
    int numSteps(string s){
         int steps = 0;
        int carry = 0;

        for (int i = s.length() - 1; i > 0; i--) {
            int bit = (s[i] - '0') + carry;

            if (bit == 1) {
                steps += 2;
                carry = 1;
            } else {
                steps += 1;
            }
        }

        return steps + carry;
    }
};