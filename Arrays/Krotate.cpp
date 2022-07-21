#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void reverse(vector<int> &arr, int start, int end){
        while(start < end){
            swap(arr[start], arr[end]);
            start++, end --;
        }
    }
    
    
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(k > n){
            k = k % n;
        }
    
        reverse(nums, 0, n - 1 - k);
        reverse(nums, n - k, n - 1); //n - 1 - k + 1 = n - k
        reverse(nums, 0, n - 1);
    }
};

