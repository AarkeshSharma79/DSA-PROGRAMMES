class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.length();
        int  i=0;
        int j=n-1;
        while(i<j)
        {
            char ch1=tolower(s[i]);
            char ch2=tolower(s[j]);
            if((ch1>='a'&& ch1<='z')&&(ch2>='a' &&ch2<='z')){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!(ch1>='a'&& ch1<='z')) i++;
            else  if(!(ch2>='a' &&ch2<='z')) j--;
        }
        return s;
    }
};