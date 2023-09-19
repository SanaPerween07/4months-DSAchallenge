class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
        int maxi_right = -1; // Replace the last element with -1
        
        for (int i = nums.size() - 1; i >= 0; i--) {
            int temp = nums[i];
            nums[i] = maxi_right;
            maxi_right = max(maxi_right, temp);
        }
         return nums;
    }
};