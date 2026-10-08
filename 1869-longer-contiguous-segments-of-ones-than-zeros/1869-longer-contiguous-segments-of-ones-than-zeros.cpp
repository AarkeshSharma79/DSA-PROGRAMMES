class Solution {
public:
    bool checkZeroOnes(string s) {
        int c1=INT_MIN;
        int c0=INT_MIN;
        int c11=0;
        int c00=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                c11++;
                c00=0;
                c1=max(c1,c11);
            }
            else {
                c00++;
                c11=0;
                c0=max(c0,c00);
            }
        }
        return c1>c0;
    }
};