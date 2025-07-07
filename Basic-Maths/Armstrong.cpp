#include<bits/stdc++.h>
using namespace std;

bool armstrong(int n){
    
    int temp = n;
    int count = log10(n) + 1;
    int arm = 0;
    while(temp != 0){
        int digit = temp%10;
        arm = arm + pow(digit,count);
        temp/=10;
    }
    
    if(arm == n) return true;
    return false;
}
int main(){
    cout << armstrong(153);
}
