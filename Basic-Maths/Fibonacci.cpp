4 Approaches :- 

i) Recursion (Brute force)
ii) Recursion + Memoization (Top-Down DP)
iii) Tabulation (Bottom-Up DP)
iv) Space Optimized (2 variables)

| Method                        | Time Complexity | Space Complexity   |
| :---------------------------- | :-------------- | :----------------- |
| Recursion (Brute force)       | O(2^N)          | O(N) (stack space) |
| Memoization (Top-Down DP)     | O(N)            | O(N)               |
| Tabulation (Bottom-Up DP)     | O(N)            | O(N)               |
| Space Optimized (2 variables) | O(N)            | O(1) ✅             |


1. Recursion (Brute force):-
  
  int fib(int n){
    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

2. Space optimized(2 variables)

  https://leetcode.com/problems/fibonacci-number/

  class Solution {
public:
    int fib(int n) {
        if(n <= 1) return n;
        int prev = 0;
        int curr = 1;

        for(int i = 2; i <= n; i++){
            int next = prev + curr;
            prev = curr;
            curr = next;
        }
        return curr;

    }
};



