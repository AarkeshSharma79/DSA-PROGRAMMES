class Solution {
public:
    typedef pair<int,int>pi;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        //map pair is <ele,fre>
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        // heap pair<fre,ele>
        priority_queue<pi,vector<pi>,greater<pi>>pq;
        for(auto x:mp){
            int ele=x.first;
            int fre=x.second;
            pair<int,int>p={fre,ele};
            pq.push(p);
            if(pq.size()>k) pq.pop();
        }
        while(pq.size()>0){
            int ele=pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        return ans;
    }
};