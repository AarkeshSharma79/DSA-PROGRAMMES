class Solution {
public:
    bool digitD(int n){
        vector<int>d;
        int num=n;
        while(n>0){
            int b=n%10;
            d.push_back(b);
            n=n/10;
        }
        for(int i=0;i<d.size();i++){
            if(d[i]==0 || num%d[i]!=0) return false;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int l, int r) {
        vector<int>ans;
        for(int i=l;i<=r;i++){
            if(digitD(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};