class Solution {
public:
    int maxPower(string s) {
        int n = s.length();
        int cnt=1 , maxi=1;
        char ch=s[0];
        for(int i=1; i<n; i++){
            if(s[i] == ch){
                cnt++;
                maxi = max(maxi,cnt);
            }
            else{
                cnt=1;
                ch= s[i];
            }
        }
        return maxi;
    }
};