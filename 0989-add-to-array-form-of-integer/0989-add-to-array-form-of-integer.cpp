class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        // int n=num.size();
        // vector<int> ans;
        // string str;
        // int sum=0;
        // for(int i=0;i<n;i++){
        //     str+=to_string(num[i]);
        // }
        // sum=stoi(str)+k;
        // while(sum>0){
        //     int r=sum%10;
        //     ans.push_back(r);
        //     sum/=10;
        // }
        // reverse(ans.begin(), ans.end());
        // return ans;

        // method 2
        for(int i=num.size()-1;i>=0;i--)                                        
        {
          k+=num[i];                                         
          num[i]=k%10;
          k/=10;
        }
      while(k)
       {
          num.insert(num.begin(),k%10);
          k/=10;
        }
     return num;
    }
};