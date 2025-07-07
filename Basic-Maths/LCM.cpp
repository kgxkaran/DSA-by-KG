//LCM Of a,b = a*b/gcd(a,b)

#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    if(b == 0) return a;
    else{
        return gcd(b , a%b);
    }
}

int main(){
   int a,b;
   cin >> a >> b;
   int hcf = gcd(a,b);
   cout << "Lcm is : " << (a * b)/hcf;
}
