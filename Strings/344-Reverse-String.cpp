class Solution {
public:
    void reverseString(vector<char>& s) {
        int n= s.size();
        for(int i=0; i<n/2; i++){
            swap(s[i],s[n-i-1]);
        }
    }
};



//  alternatively, we can also use two pointer approach

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int start = 0, end = n-1;
        while(start<end){
            swap(s[start++], s[end--]);
        }
        return s;
    }
};