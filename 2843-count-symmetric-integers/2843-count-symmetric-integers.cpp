
class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt = 0;

        for(int i = low; i <= high; i++) {
            string str = to_string(i);
            int n = str.length();
            if(n % 2 != 0) continue;

            int sum1 = 0;
            int sum2 = 0;

            for(int j = 0; j < n/2; j++) {
                sum1 += str[j] - '0';
                sum2 += str[n-j-1] - '0';
            }

            if(sum1 == sum2) {
                cnt++;
            }
        }

        return cnt;
    }
};
