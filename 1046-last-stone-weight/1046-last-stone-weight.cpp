class Solution {
public:
    int lastStoneWeight(vector<int>& arr) {
        priority_queue<int>pq;
        for(auto x:arr){
            pq.push(x);
        }
        while(pq.size()!=1){
            int y=pq.top();
            pq.pop();
            int x=pq.top();
            pq.pop();
            if(x<=y){
                int z=abs(y-x);
                pq.push(z);
            }
            else if(x==y) continue;
        }
        return pq.top();
    }
};