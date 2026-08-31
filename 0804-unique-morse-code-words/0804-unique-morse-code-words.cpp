class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
         vector<string> code = {
            ".-", "-...", "-.-.", "-..", ".", "..-.",
            "--.", "....", "..", ".---", "-.-", ".-..",
            "--", "-.", "---", ".--.", "--.-", ".-.",
            "...", "-", "..-", "...-", ".--", "-..-",
            "-.--", "--.."
        };

        unordered_set<string> s;

        for (int i = 0; i < words.size(); i++) {
            string morse = "";

            for (char ch : words[i]) {
                morse += code[ch - 'a'];
            }

            s.insert(morse);
        }

        return s.size();
    }
};