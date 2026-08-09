class Solution {
public:
    bool isBalanced(string num) {
        int n=num.length();
        int sumE=0;
        int sumO=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                sumE+=num[i]-'0';
            }
            else sumO+=num[i]-'0';
        }
        if(sumE==sumO) return true;
        else return false;
    }
};