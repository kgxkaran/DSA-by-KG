https://leetcode.com/problems/rotate-array/

Approach 1 :- Using formula (i+k) % nums.size() 
              Time Complexity :- O(N)
              Space Complexity :- O(N)

  class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temp(nums.size());
        for(int i = 0; i < nums.size(); i++){
            temp[(i + k) % nums.size()] = nums[i];
        }
        nums = temp;

    }
}; 

Approach 2 (a):-  Pehle reverse karo puri array ko..then first k elements reverse karo then (n-k) elements reverse kro 

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        reverse(nums.begin() , nums.end());
        reverse(nums.begin() , nums.begin() + k);
        reverse(nums.begin() + k , nums.end());
    }
}; 

Approach 2 (b) :- manually making the function public reverse

class Solution {
public:
    void reverse(vector<int>&nums, int start, int end){
        while(start < end){
            swap(nums[start++] , nums[end--]);
        }

    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
         k = k % n;
        reverse(nums , 0 , n - 1);
        reverse(nums, 0 , k - 1);
        reverse(nums, k , n - 1);
    }
}; 
