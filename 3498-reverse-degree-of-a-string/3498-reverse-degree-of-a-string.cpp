class Solution {
public:
    int reverseCharvalue(char ch){
       int a= 26 - (ch - 'a');
       return a;
    }
    int reverseDegree(string s) {
       int n=s.length();
       int sum=0;
       for(int i=0;i<n;i++){
       int a=reverseCharvalue(s[i]);
        sum+=(i+1)*a;
       }
       return sum; 
    }
};