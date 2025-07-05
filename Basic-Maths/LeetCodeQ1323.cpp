📌 Related Functions:
stoi() → string to int

stol() → string to long

stoll() → string to long long

stod() → string to double

to_string(integer) -> integer to string

int digit = num[i] - '0';    -> converts a char type to int very useful in iteration


//Approach 1 :- using to_string()

class Solution {
public:
    
    int maximum69Number (int num) {
        string s = to_string(num);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '6'){
                s[i] = '9';
                break;
            }
        }
        return stoi(s);
    }
};

//Approach 2 : Most Optimized 

class Solution {
public:
    int maximum69Number (int num) {
        int n = num;
        int pos = -1;   // sabse pehla 6 kis position pe hai (from right)
        int place = 0;  // current place value (0 for units, 1 for tens,...)

        while (n > 0) {
            int digit = n % 10;
            if (digit == 6) {
                pos = place;
            }
            n /= 10;
            place++;
        }

        if (pos != -1) {
            num += 3 * pow(10, pos);  // us position pe 3 add kar ke 6 ko 9 bana dena
        }

        return num;
    }
};


