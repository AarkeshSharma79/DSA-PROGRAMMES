class Solution {
    public int strStr(String haystack, String needle) {
    if (haystack == null || needle == null) return -1;

    int pos = haystack.indexOf(needle);

    if (pos != -1) return pos;

    return -1;

    }
}