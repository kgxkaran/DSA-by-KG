class Solution {
public:
    int expandOdd(string s, int left, int right){
        int count = 0;
        while(left >=0 && right < s.size() && s[left] == s[right]){
            left--;
            right++;
            count++;
        }
        return count;
    }
    int expandEven(string s, int left, int right){
        int count = 0;
         while(left >=0 && right < s.size() && s[left] == s[right]){
            left--;
            right++;
            count++;
        }
        return count;
    }

    int countSubstrings(string s) {

        int ans = 0;
        for(int i = 0; i < s.size(); i++){
           int odd = expandOdd(s , i , i);
           int even = expandEven(s , i , i+1);
            ans = ans + odd + even;
        }
        
        return ans;
        
    }
};
