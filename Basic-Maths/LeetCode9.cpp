class Solution {
public:
    bool isPalindrome(int x) {

       long long temp = x;
       long long reverse = 0;

       while(temp > 0){

        long digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
       }

       return x == reverse;
    }
};
