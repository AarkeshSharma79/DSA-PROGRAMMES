class Solution {
public:
    long long sumAndMultiply(int n) {
        string str=to_string(n);
        string d="";
        for(int i=0;i<str.length();i++){
            if(str[i]!='0'){
                d+=str[i];
            }
        }
        long long x = d.empty() ? 0 : stoll(d);
        long long y=x;
        long long sum=0;
        while(y>0){
            int di=y%10;
            sum+=di;
            y/=10;
        }
        return x*sum;
    }
};