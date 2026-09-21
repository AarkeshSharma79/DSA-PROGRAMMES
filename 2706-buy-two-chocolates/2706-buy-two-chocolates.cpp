class Solution {
public:
    int buyChoco(vector<int>& p, int m) {
        // int n=p.size();
        // int mini=INT_MAX;
        // int smin=INT_MAX;
        // for(int i=0;i<n;i++){
        //     mini=min(mini,p[i]);
        // }
        // for(int i=0;i<n;i++){
        //     if(mini==p[i]) continue;
        //     else smin=min(smin,p[i]);
        // }
        // int rem=m-(mini+smin);
        // if(rem>=0)return rem;
        // else if(rem<0) return m;
        // else return 0;
        

        // tc nlogn
        sort(p.begin(),p.end());
        int rem=m-(p[0]+p[1]);
        if(rem>=0)return rem;
        else if(rem<0) return m;
        else return 0;
    }
};