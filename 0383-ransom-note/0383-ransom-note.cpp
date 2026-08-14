class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // int n=ransomNote.length();
        // int m=magazine.length();
        // int i=0,j=0;
        // while(i<n&&j<m)
        // {
        //     if(ransomNote[i]==magazine[j])
        //     {
        //         i++;
        //     }
        //     j++;
        // }
        // if(i==n) return true;
        // else return false;

        int count[26]={0};
        for(char c :magazine){
            count[c-'a']++;
        }

        for (char c : ransomNote) {
        count[c - 'a']--;

        if (count[c - 'a'] < 0) {
            return false;
        }
        }
        return true;
    }

};