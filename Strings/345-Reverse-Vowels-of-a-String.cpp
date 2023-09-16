class Solution {
public:
    bool isvowel(char ch){
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A'|| ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') 
            return true;
        else return false;
    }
    
    string reverseVowels(string s) {
        int start =0;
        int end = s.size()-1;
        
        while(start<end){
            if(isvowel(s[start]) && isvowel(s[end])){
                swap(s[start++],s[end--]);
            }
            if(!isvowel(s[start])){
                start++;
            }
            if(!isvowel(s[end])){
                end--;
            }
        }
        return s;
    }
};