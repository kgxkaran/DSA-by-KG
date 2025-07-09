https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/



class Solution {
public:
    bool check(vector<int>& nums) {

        int pair = 0;
        int n = nums.size();

        for( int i = 0 ; i < n ; i++){ 
            if(nums[i] > nums[(i + 1) % n]) pair++;
        }

        return pair <= 1;
    }
};
