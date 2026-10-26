class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        int np;
        np=total/cost1;
        long long sum=0;
        for(int i=0;i<=np;i++){
            long long rem=total-(i*cost1);
            sum+=rem/cost2+1;
        }
        return sum;
    }
};