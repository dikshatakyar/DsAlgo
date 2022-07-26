//Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order. 46. Permutations
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //leetcode : https://leetcode.com/problems/permutations/
    void func(vector<int> &nums, vector<vector<int>> &ans, int n, vector<int>
              &freqarr, vector<int> &ds){
        
        if(n == ds.size()){
            ans.push_back(ds);
            return;
        }
        for(int i = 0; i < n; ++i){
            if(!freqarr[i]){
                ds.push_back(nums[i]);
                freqarr[i] = 1;
                func(nums, ans, n, freqarr, ds);
                ds.pop_back();
                freqarr[i] = 0;
            }
        }
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        vector<int> freqarr(n, 0);
        vector<int> ds;
        
        func(nums, ans, n, freqarr, ds);
        
        return ans;
    }
};