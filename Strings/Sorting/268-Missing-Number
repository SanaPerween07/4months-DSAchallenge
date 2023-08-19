class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int i=0;
        while(i<n){
            if(nums[i] != i && nums[i]<n){
                swap(nums ,nums[i], i);
            }
            else{
                i++;
            }
        }
       //missing number
       for(int i=0;i<n ; i++){
           if(nums[i]!=i){
               return i;
           }
       } 
       return n;
    }

    //swap function
    static void swap(vector<int> &nums,int first, int second){
    int temp= nums[first];
    nums[first]=nums[second];
    nums[second]=temp;
    }
};