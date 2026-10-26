class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long>ans;
        if (num==0) return {-1,0,1};
        long long lo=1;
        long long hi=num/2;
        while(lo<=hi){
            long long mi=lo+(hi-lo)/2;
            if(mi-1+mi+mi+1==num){
                ans.push_back(mi-1);
                ans.push_back(mi);
                ans.push_back(mi+1);
                return ans;
            }
            else if(mi-1+mi+mi+1<num) lo=mi+1;
            else hi=mi-1;
        }
        return ans;
    }
};