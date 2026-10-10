class Solution {
public:
    int thirdMax(vector<int>& nums) {
        priority_queue<int> pq(nums.begin(), nums.end());
        
        long long prev = LLONG_MIN;
        int distinctCount = 0;
        int maxVal = pq.top();

        while (!pq.empty()) {
            int current = pq.top();
            pq.pop();

            if (distinctCount == 0 || current != prev) {
                distinctCount++;
                prev = current;
            }
            if (distinctCount == 3) {
                return current;
            }
        }
        return maxVal;
    }
};