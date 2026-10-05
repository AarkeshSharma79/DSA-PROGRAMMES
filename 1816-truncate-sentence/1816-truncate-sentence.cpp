class Solution {
public:
    string truncateSentence(string s, int k) {
        int n=s.length();
        string w="";
        int sc=0;
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                w+=s[i];
            }
            else{
                sc++;
                if(sc==k) break;
                w+=' ';
            }
        }
        return w;
    }
};