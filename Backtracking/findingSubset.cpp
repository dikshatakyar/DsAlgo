#include<bits/stdc++.h>
using namespace std;
//Leetcode 78
class Solution {
public:
    vector<vector<int>> allsubsets;
    
    void generate(vector<int> &subset, int i, vector<int> &nums){
        
        if(i == nums.size()){
            allsubsets.push_back(subset);
            return;
        }
        
        subset.push_back(nums[i]);
        generate(subset, i + 1, nums);
        subset.pop_back();
        
        generate(subset, i + 1, nums);
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
            vector<int> emptysubset;
            generate(emptysubset, 0, nums);
        
        return allsubsets;
    }
};


int main(){
    Solution s1;
    vector<vector<int>> storing;
    vector<int> nums;
    storing = s1.subsets(nums);
    sort(storing.begin(), storing.end());
}