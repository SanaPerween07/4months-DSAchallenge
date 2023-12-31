class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i = 0;
        int n = nums.size();
        
        while (i < n) {
            if (nums[i] != i + 1) {
                int correct = nums[i] - 1;
                if (nums[i] != nums[correct]) {
                    swap(nums, i, correct); 
                } else {
                    return nums[i];
                }
            } else {
                i++; 
            }
        }
        
        return 0; 
    }

    // Swap function
    static void swap(std::vector<int>& nums, int first, int second) {
        int temp = nums[first];
        nums[first] = nums[second];
        nums[second] = temp;
    }
};