Approach 1 :- Brute Force O(N^2);

#include<bits/stdc++.h>
using namespace std;

int maxDiff(vector<int>&nums){
    int n = nums.size();
    int maxElem = nums[1] - nums[0];  // pehla difference assume
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            int diff = nums[j] - nums[i];
            if(diff > maxElem){
                maxElem = diff;
            }
        }
    }
    return maxElem;
}

Approach 2 :- Optimal O(N)

#include<bits/stdc++.h>
using namespace std;

int maxDiff(vector<int>&nums){
    int n = nums.size();
    if(n == 1) return nums[n - 1];   // edge case handle

    int maxElem = nums[1] - nums[0];  // pehla difference assume
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            int diff = nums[j] - nums[i];
            if(diff > maxElem){
                maxElem = diff;
            }
        }
    }
    return maxElem;
}
