https://leetcode.com/problems/reverse-string/description/

In Place solution using two pointers:- O(1) space complexity


class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size() - 1;
        while(i <= j){
            swap(s[i] , s[j]);
            i++;
            j--;
        }
    }
};
