class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int m=num;
        string str=to_string(num);
        int n=str.length();
        int cnt=0;
        for(int i=0;i<n-k+1;i++){
            string s=str.substr(i,k);
            int a= stoi(s);
            if(a==0) continue;
            else{
                if(m%a==0) cnt++;
            }
        }
        return cnt;
    }
};