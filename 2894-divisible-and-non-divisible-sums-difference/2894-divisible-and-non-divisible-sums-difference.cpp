class Solution {
public:
    int differenceOfSums(int n, int m) {
        int db=0;
        int ndb=0;
        for(int i=1;i<=n;i++){
            if(i%m==0) db+=i;
            else ndb+=i;
        }
        return ndb-db;
    }
};