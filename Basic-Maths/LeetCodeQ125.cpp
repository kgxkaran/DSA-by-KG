https://leetcode.com/problems/valid-palindrome/description/

class Solution {
public:
    
    bool isPalindrome(string s) {

        if(s.size() == 1){
            return true;
        }

        int left = 0;
        int right = s.size() - 1;


        while(left < right){
            if(!isalnum(s[left])){
                left++;
                continue;
            }

             if(!isalnum(s[right])){
                right--;
                continue;
            }

            if(tolower(s[left++]) != tolower(s[right--])){    //check palindrome from whole string
                return false; 
            }
        }

        return true;

    }
};
