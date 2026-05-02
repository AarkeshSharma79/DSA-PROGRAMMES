class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool>ans;
        int maxc=INT_MIN;
        for(int i=0;i<n;i++){
            maxc=max(maxc,candies[i]);
        }
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies>=maxc) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};