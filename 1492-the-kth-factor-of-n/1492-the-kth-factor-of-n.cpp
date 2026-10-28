class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>p;
        for(int i=1;i<=n;i++){
            if(n%i==0) p.push_back(i);
        }
        if(k>p.size()) return -1;
        else {
            sort(p.begin(),p.end());
            return p[k-1];
        }
    }
};