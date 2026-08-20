class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& arr) {
        int n=arr.size();
        int count=0;
        for(int i=0;i<n;i++){
            string r=arr[i];
            reverse(r.begin(),r.end());
            for(int j=i+1;j<n;j++){
                if(arr[j]==r){
                    count++;
                }
            }

        }
        return count;

    }
};