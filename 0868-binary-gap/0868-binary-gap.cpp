class Solution {
public:
    int binaryGap(int n) {
        int d=0;
        vector<int>b;
       while(n>0){
        int rem=n%2;
        b.push_back(rem);
        n/=2;
       }
       reverse(b.begin(),b.end());
       priority_queue<pair<int, int>,vector<pair<int, int>>,greater<pair<int, int>>> pq;
       for(int i=0;i<b.size();i++){
        if(b[i]==1){
           pq.push({i,b[i]}); 
        }
       }
       while(pq.size()>0){
        int a=pq.top().first;
        pq.pop();
        int c=pq.top().first;
        d=max(d,c-a);
       }
       return d;
    }
};