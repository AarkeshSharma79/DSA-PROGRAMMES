class Solution {
public:
    int minimumFlips(int n) {
        string str="";
        while(n>0){
           int a=n%2;
           str+=to_string(a);
           n/=2; 
        }
        string s=str;
        reverse(str.begin(),str.end());
        int cnt=0;
        for(int i=0;i<str.length();i++){
            if(s[i]!=str[i]) cnt++;
        }
        return cnt;
    }
};