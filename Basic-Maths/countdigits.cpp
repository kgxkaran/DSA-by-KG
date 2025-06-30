
#include<bits/stdc++.h>
using namespace std;

int count(long long  n){
    int count = 0;
    while(n > 0){
        count++;
        n/=10;
    }
    return count;
}
int main(){
    cout << count(6543386756353);
}

Time Complexity = O(logn) //coz iterations kam horhi hh
Space Complexity = O(1)

SHORTCUT :- 


#include<bits/stdc++.h>
using namespace std;

int count(long long  n){
    int count = log10(n) + 1;    //shortcut formula
    return count;
}
int main(){
    cout << count(6543386756353);
}
