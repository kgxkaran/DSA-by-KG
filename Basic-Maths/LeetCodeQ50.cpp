class Solution {
public:
    double myPow(double x, int n) {

        long long N = n;
        if(N < 0) {
            x = 1/x;
            N = -N;
        }
        double ans = 1;
        while(N > 0){
            if(N % 2 == 1) ans = ans * x;
            x = x*x;
            N = N/2;
        }
         return ans;
    }
};

=>  pow(double n , double power) function 

✅ Ye double return karta hai
✅ Floating point error aa sakta hai
✅ Time complexity platform pe depend karta hai (but usually O(log b))

Isliye CP me mostly hum Binary Exponentiation likhte hain.
