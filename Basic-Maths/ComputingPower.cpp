 1️⃣ Naive Method (Brute Force) :-

=> Time Complexity: O(b)

  #include<bits/stdc++.h>
using namespace std;

int power(int a , int b){
    int ans = 1;
    for(int i = 1; i <= b; i++){
        ans = ans*a;
    }
    return ans;
}
int main(){
    cout << power(2,5);
}


2️⃣ Recursive Method:-
 => Time Complexity: O(b)
 => Space Complexity: O(b) (stack calls)


#include<bits/stdc++.h>
using namespace std;

int power(int a , int b){
    if(b == 0) return 1;
    
    return a * power(a , b-1);
}
int main(){
    cout << power(2,5);
}

3️⃣ Binary Exponentiation (Optimized ⚡) :-

  => Time Complexity: O(log b)
  => Space Complexity: O(1)

  long long power(long long a, long long b){
    long long ans = 1;
    while(b > 0){
        if(b % 2 == 1)
            ans *= a;
        a *= a;
        b /= 2;
    }
    return ans;
}
