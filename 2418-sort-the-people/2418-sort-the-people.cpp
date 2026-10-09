class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();
        vector<pair<int, string>> people(n);
        
        for (int i = 0; i < n; i++) {
            people[i] = {heights[i], names[i]};
        }
        
        // Sort in descending order of height
        sort(people.rbegin(), people.rend());
        
        vector<string> ans(n);
        for (int i = 0; i < n; i++) {
            ans[i] = people[i].second;
        }
        
        return ans;
    }
};