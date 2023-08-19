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