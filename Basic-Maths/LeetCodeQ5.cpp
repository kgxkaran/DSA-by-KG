class Solution {
public:
    string expand(string s , int left , int right){
        while(left >= 0 && right < s.size() && s[left] == s[right]){
            left--;
            right++;
        }
        return s.substr(left + 1 , right - left - 1);
    }
    string longestPalindrome(string s) {
        if(s.size() <= 1) return s;
        string longest = "";

        for(int i = 0; i < s.size(); i++){

            string oldpalin = expand(s , i , i);
            if(oldpalin.size() > longest.size()){
                longest = oldpalin;
            }

            string evenpalin = expand(s , i , i+1);
            if(evenpalin.size() > longest.size()){
                longest = evenpalin;
            }

        }
        return longest;
        
    }
};
