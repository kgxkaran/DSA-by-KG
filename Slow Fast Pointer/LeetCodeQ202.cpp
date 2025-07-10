class Solution {
public:
    int getSum(int n){
        int sum = 0;
        while(n > 0){
            int digit = n % 10;
            sum = sum + (digit * digit);
            n = n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slowRunner = n;
        int fastRunner = getSum(n);

        while(fastRunner != 1 && slowRunner != fastRunner){
            slowRunner = getSum(slowRunner);
            fastRunner = getSum(getSum(fastRunner));
        }

        return fastRunner == 1;
        

        

     
    }
};
