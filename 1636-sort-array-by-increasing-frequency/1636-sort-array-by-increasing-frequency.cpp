class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;

        // Count frequency
        for(int x : nums) {
            freq[x]++;
        }

        // Min heap: {frequency, -value}
        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > pq;

        for(auto it : freq) {
            pq.push({it.second, -it.first});
        }

        vector<int> ans;

        // Extract elements according to priority
        // - before use decreasing order sorting
        while(!pq.empty()) {
            int f = pq.top().first;
            int val = -pq.top().second;
            pq.pop();

            for(int i = 0; i < f; i++) {
                ans.push_back(val);
            }
        }

        return ans;
    }
};