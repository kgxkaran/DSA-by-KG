//Brute-Force :- O(min(a,b))

#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    int result = min(a,b);
    while(result > 0){
        if(a % result == 0 && b % result == 0) break;
        result--;
    }
    return result;
}
int main(){
    cout << gcd(22,121);
}

//Optimized(Using euclid algo) :- O(log(a,b))

#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    if(b == 0) return a;
    else{
        return gcd(b , a % b);
    }
}
int main(){
    cout << gcd(22,121);
}
