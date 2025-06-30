// we learnt the case of carry handling in this 
// jab bhi carry wala case ho (jaise addition, plus one), hamesha right se left loop lagana best hota hai.

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();
        for(int i = n - 1; i >= 0; i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin() , 1);
        return digits;

        }
}; 

📊 Time & Space Complexity:

Time: O(n)
Space: O(1)
