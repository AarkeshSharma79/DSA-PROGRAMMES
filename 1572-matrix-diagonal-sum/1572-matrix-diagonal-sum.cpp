class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            sum+=mat[i][i];
            if(i==n-i-1) continue;
            sum+=mat[i][n-i-1];
        }
        return sum;
    }
};