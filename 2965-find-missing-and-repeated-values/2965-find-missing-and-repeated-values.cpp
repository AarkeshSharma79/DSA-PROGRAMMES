class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
         int n = grid.size();
        unordered_map<int,int>mp;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                mp[grid[i][j]]++;
            }
        }
        int repeat = -1;
        int missing = -1;

        // Check numbers from 1 to n*n
        for(int i = 1; i <= n*n; i++) {

            if(mp[i] == 2) {
                repeat = i;
            }

            if(mp[i] == 0) {
                missing = i;
            }
        }

        return {repeat, missing};
    }
};