class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> s;
        
        for(int c : candyType) {
            s.insert(c);
        }
        
        int ut = s.size();
        int maxC = candyType.size() / 2;
        
        return min(ut, maxC);
    }
};