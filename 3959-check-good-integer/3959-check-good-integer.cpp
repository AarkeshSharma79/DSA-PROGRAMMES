class Solution {
public:
    bool checkGoodInteger(int n) {
        int dSum=0;
        int  Ssum=0;
        while(n>0){
            int d=n%10;
            dSum+=d;
            Ssum+=pow(d,2);
            n/=10;
        }
        if(Ssum-dSum>=50) return true;
        else return false;
    }
};