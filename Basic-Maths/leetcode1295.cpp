class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            int digit = log10(nums[i]) + 1;
            if(digit % 2 == 0) count++;
        }
        return count;
    }
};

📊 Time Complexity:
O(n) → because ek loop lag raha hai nums.size() tak

log10(nums[i]) ki complexity O(1) hoti hai C++ me
(floating point operations constant time hote hain)

📦 Space Complexity:
O(1) → koi extra array/vector ya recursion nahi, bas ek count variable

//Jab bhi index ki zarurat na ho — hamesha range-based for loop prefer karna chahiye

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i : nums){
            int digit = log10(i) + 1;
            if(digit % 2 == 0) count++;
        }
        return count;
    }
};
