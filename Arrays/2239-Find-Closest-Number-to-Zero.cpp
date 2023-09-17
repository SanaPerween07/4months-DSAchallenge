class Solution {
public:
    int findClosestNumber(std::vector<int>& nums) {
        int min = INT_MAX; // Initialize min to the maximum possible integer value
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (abs(nums[i]) < min || nums[i] == abs(min)) {
                min = abs(nums[i]);
                ans = nums[i];
            }
        }

        return ans;
    }
};
