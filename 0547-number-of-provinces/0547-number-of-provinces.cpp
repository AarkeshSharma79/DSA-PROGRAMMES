class Solution {
public:
    int FindSet(int a,vector<int>&parent)
{
    while(a!=parent[a]){
        a=parent[a];
    }
    return a;
}
        void Union(int a, int b,vector<int>&parent){
            while(a!=parent[a]) a=parent[a];
           while(b!=parent[b]) b=parent[b];
          parent[b]=a;
        }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>parent(n);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
        int pro=n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1){
                    if(FindSet(i,parent)!=FindSet(j,parent))
                    {
                        Union(i,j,parent); 
                        pro--;
                    }
                }
            }
        }
        return pro;
    }
};