class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int>v;
        while(n>0){
           int rem=n%2;
            v.push_back(rem);
            n=n/2;
        }
        bool flag=true;
        for(int i=0;i<v.size()-1;i++){
            if((v[i]==1 && v[i+1]==1)||(v[i]==0 && v[i+1]==0)){
                flag=false;
                return flag;
            }
        }
        return flag;
    }
};