// class Solution {
// public:
//     bool digitd(int n){
//          while(n>=10){
//             int a=n%10;
//             n=n/10;
//             int b=n%10;
//             if((a-b)!=1) return false;
//         } 
//         return true;
//     }
//     vector<int> sequentialDigits(int lo, int hi) {
//         vector<int>ans;
//         for(int i=lo;i<=hi;i++){
//             int n=i;
//             if(digitd(n)) ans.push_back(n);
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;

        for (int start = 1; start <= 9; start++) {
            int num = start;

            for (int next = start + 1; next <= 9; next++) {
                num = num * 10 + next;

                if (num >= low && num <= high)
                    ans.push_back(num);
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};