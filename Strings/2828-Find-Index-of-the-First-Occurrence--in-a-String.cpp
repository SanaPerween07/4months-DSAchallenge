class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = haystack.find(needle);
        if(i == haystack.npos) {
            return -1;
        }
        else {
            return i;
        }
    }
};