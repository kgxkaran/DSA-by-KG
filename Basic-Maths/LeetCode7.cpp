class Solution {
public:
    int reverse(int x) {

        long ans=0;
        while(x!=0){
            ans=(ans*10)+(x % 10);
             if((ans>INT_MAX)||(ans<INT_MIN)){
                return 0;
            }
            x=x/10;
        }
        return ans;
    }
};


Time Complexity :- 	O(log n)
Space Complexity :- 	O(1)
