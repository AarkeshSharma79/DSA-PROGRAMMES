class Solution {
public:
    int hammingWeight(int n) {
        string s="";
        int count=0;
        while(n>0)
        {
            int r=n%2;
            s+=to_string(r);
            n=n/2;
        }
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1') count++;

        }
        return count;

    }
};