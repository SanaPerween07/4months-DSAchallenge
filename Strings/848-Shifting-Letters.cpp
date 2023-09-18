class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = s.size();
        long long totalShift = 0; 
        
        for (int i = n - 1; i >= 0; i--) {
            totalShift += shifts[i]; 
            s[i] = 'a' + (s[i] - 'a' + totalShift) % 26;
        }
        
        return s;
    }
};