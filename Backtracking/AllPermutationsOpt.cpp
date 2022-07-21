//46. Permutations :  Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order. WITH O(1) SPACE COMPLEXITY

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    void func(vector<vector<int>> &ans, vector<int> &nums, int ind){
        int n = nums.size();
        if(ind == n){
            ans.push_back(nums);
        }
        
        for(int i = ind; i < n; ++i){
            swap(nums[i], nums[ind]);
            func(ans, nums, ind + 1);
            swap(nums[i], nums[ind]);
        }
    }
        
       
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int ind = 0;
        func(ans, nums, ind);
        return ans;
    }
};