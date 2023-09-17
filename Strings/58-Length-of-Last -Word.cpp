class Solution {
public:
    int lengthOfLastWord(string s) {
        int n= s.length();
        int cnt= 0;
        bool flag= false;
    
        for(int i=n-1; i>=0; i--){
            if(s[i]!=' '){
                flag= true;
                cnt++;
            }
            else if(s[i]==' ' && flag== true){
                break;
            }
        }
        return cnt;
    }
};


// The purpose of this flag is to determine 
// whether we have started counting the length of the last word or 
// if we are still in the trailing spaces at the end of the string.