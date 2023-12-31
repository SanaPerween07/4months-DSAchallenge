class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.length();
        int index = -1; // Initialize index to -1
        for (int i = 0; i < n; i++) {
            if (word[i] == ch) {
                index = i;
                break;
            }
        }
        if (index != -1) { // Check if ch was found
            reverse(word.begin(), word.begin() + index + 1); // Reverse the substring
        }
        return word;
    }
};


// alternatively, instead of running the for loop we can also use 
// int index = word.find(ch)
// to find the index of first occurence of ch in word