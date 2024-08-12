class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vowel;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' ||
                s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' ||
                s[i] == 'u' || s[i] == 'U') {
                vowel.push_back(s[i]);
            }
        }
        reverse(vowel.begin(), vowel.end());
        int p = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' ||
                s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' ||
                s[i] == 'u' || s[i] == 'U') {
                s[i] = vowel[p];
                p++;
            }
        }
        return s;
    }
};