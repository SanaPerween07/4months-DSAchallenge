class Solution {
public:
    int countElements(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) {
            return 0;  
        }
        
        int min_val = INT_MAX;     
        int max_val = INT_MIN;    
        int count = 0;

        for (int i = 0; i < n; i++) {
            min_val = min(nums[i] , min_val);
            max_val = max(nums[i] , max_val);
        }
        for (int i = 0; i < n; i++) {
            if (min_val < nums[i] && nums[i] < max_val) {
                count++;
            }
        }
        return count;
    }
};
