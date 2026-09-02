class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            int a=(arr[i]%k+k)%k;
            arr[i]=a;
        }
        unordered_map<int,int>m;
        for(int x:arr){
            m[x]++;
        }
        if(m.find(0)!=m.end()){
            if(m[0]%2!=0) return false;
            m.erase(0);
        }
        for(auto x:m){
            int a=x.first;
            int r=k-a;
            if(m.find(r)==m.end()) return false;
            if(m[a]!=m[r]) return false;
            
        }
        return true;
    }
};