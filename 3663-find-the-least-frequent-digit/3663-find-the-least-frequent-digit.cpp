class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int,int>mp;
        while(n>0){
            int r=n%10;
            mp[r]++;
            n/=10;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto x:mp){
            pq.push({x.second,x.first});
        }
        return pq.top().second;
    }
};