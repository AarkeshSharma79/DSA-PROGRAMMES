class Solution {
public:
    int lengthOfLastWord(string s) {
        int len =s.length();
        int j=len-1;
        int count=0;
        while(j>=0&& s[j]==' ') j--;//skip all trailing space
        while(j>=0 && s[j]!=' ') {
            count++;
            j--;
        }
        return count;

    }
};