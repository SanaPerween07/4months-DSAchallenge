class Solution {
public:
    bool isvowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }

    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        for (int i = left; i <= right; i++) { 
            string word = words[i];
            int n = word.size();
            if (n > 0 && isvowel(word[0]) && isvowel(word[n - 1])) {
                count++;
            }
        }
        return count;
    }
};
