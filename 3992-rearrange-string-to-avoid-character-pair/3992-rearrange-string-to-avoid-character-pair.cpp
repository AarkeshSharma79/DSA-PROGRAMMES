class Solution {
public:
    string rearrangeString(string s, char x, char y) {
    string yPart = "";
    string other = "";
    string xPart = "";

    for (char ch : s) {
        if (ch == y)
            yPart += ch;
        else if (ch == x)
            xPart += ch;
        else
            other += ch;
    }

    return yPart + other + xPart;
}
};