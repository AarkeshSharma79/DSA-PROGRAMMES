class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& arr) {
        // Time Complexity O(n^2)
        // METHOD 1
        // int n=arr.size();
        // int count=0;
        // for(int i=0;i<n;i++){
        //     string r=arr[i];
        //     reverse(r.begin(),r.end());
        //     for(int j=i+1;j<n;j++){
        //         if(arr[j]==r){
        //             count++;
        //         }
        //     }

        // }
        // return count;

        // METHOD 2
        int n=arr.size();
        unordered_set<string>s;
        int count=0;
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        for(int i=0;i<n;i++){
            string rev=arr[i];
            reverse(rev.begin(),rev.end());
            if(rev==arr[i]) continue;
            if(s.find(rev)!=s.end()) {
                count++;
                s.erase(arr[i]);
            }
        }
        return count;
    }
};