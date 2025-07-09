https://leetcode.com/problems/move-zeroes/

Approach 1 :- using extra vector space
  
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0) ans.push_back(nums[i]);
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) ans.push_back(nums[i]);
        }
        nums = ans;
    }
};

Approach 2 :-  fill all non-zero elements till index and then index se end tak 0 fill krdo

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[index] = nums[i];
                index++;
            }
        }
        for(int i = index; i < nums.size(); i++){
            nums[i] = 0;
        }
    }
};

Approach 3: using 2 Pointers

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        for(int j = 0; j < nums.size(); j++){
            if(nums[j] != 0){
                swap(nums[i] , nums[j]);
                i++;
            }
        }
       
    }
};
