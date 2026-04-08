class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        string ans="";
        bool isNegative=num<0;
        num=abs(num);
        while(num>0){
            ans+=(num%7)+'0';
            num=num/7;
        }
        if(isNegative){
            ans+='-';
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};