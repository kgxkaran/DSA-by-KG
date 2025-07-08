https://leetcode.com/problems/search-insert-position/?envType=problem-list-v2&envId=array

Its in O(N) time coz i am using Linear Search here we have to apply Binary Search to optimize it on O(logN) Time complexity

1. Linear Search :- 


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                ans = i;
                break;
            }
            if(nums[i] > target){
                ans = i;
                break;
            }
            ans = nums.size();
            
        }
        return ans;
        
    }
};

2. Binary Search :- 

  class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int high = nums.size() - 1;
        int low = 0;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(nums[mid] == target){
                return mid;
                break;
            }
            if(nums[mid] < target){
                low = mid + 1;
            }
            if(nums[mid] > target){
                high = mid - 1;
            }
        }
        return low;
    }
};

  
