Ek element leader hota hai agar:

Wo apne right ke saare elements se bada ya barabar hota hai.


#include<bits/stdc++.h>
using namespace std;

vector<int>leaders(vector<int>&nums){
    int n = nums.size();
    int maxElem = nums[n - 1];
    vector<int>ans;
    ans.push_back(maxElem);
    
    for(int i = n - 1; i >= 0; i--){
        if(nums[i] >= maxElem){
            maxElem = nums[i];
            ans.push_back(maxElem);
        }
    }
    reverse(ans.begin() , ans.end());
    return ans;
}
