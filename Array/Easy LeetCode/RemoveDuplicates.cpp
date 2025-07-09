https://leetcode.com/problems/remove-duplicates-from-sorted-array/


It was mentioned that we have to do it in-place O(1) space complexity

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int count = 0;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[count]){
                count++;
                nums[count] = nums[i];
            }
        }

        return count + 1;
    }
};
