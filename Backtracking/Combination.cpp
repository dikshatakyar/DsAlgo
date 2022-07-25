#include<bits/stdc++.h>
using namespace std;

//leetcode : https://leetcode.com/problems/combinations/

class Solution {
public:
    
    void allCombinations(int ind, int n, int k, vector<vector<int>> &ans, vector<int> &ds){
        
        if(k == ds.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i = ind; i <= n; ++i){       
            ds.push_back(i);
            allCombinations(i + 1, n, k, ans, ds);
            ds.pop_back();
        }
    }
    
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> ds;
        allCombinations(1, n, k, ans, ds);
        
        return ans;
    }
};