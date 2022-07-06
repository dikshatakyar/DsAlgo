#include <bits/stdc++.h>
using namespace std;

void fun(vector<int>& ans, vector<int> &arr, int i, int n, int k){
    if(i == n)
     return;
    
    if(arr[i] == k){
        ans.push_back(i);
    }
    
    fun(ans, arr, i + 1, n, k);
}


vector<int> findAllOccurences(int k, vector<int> v){
    vector<int> ans;
    int n = v.size();
    fun(ans, v, 0, n, k);
    return ans;
}