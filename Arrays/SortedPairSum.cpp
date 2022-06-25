#include<bits/stdc++.h>
using namespace std;

class Solution{   
public:
    vector<int> sumClosest(vector<int>arr, int x)
    {
        // code here
        int smol_diff = INT_MAX;
        // int diff = 0;
        int n = arr.size();
        int left, right;
        left = right = 0;
        int l = 0;
        int r = n - 1;
        while(l < r)
            int sum = arr[l] + arr[r];
            int diff = abs(sum - x);
            if(sum < x){
                if(smol_diff > diff){
                    smol_diff = diff;
                    left = arr[l];
                    right = arr[r];
                }
                l++;
            }
            else if(sum > x){
                if(smol_diff >= diff){
                    smol_diff = diff;
                    left = arr[l];
                    right = arr[r];
                }
                --r;
            }
            else if(sum == x){
                    left = arr[l];
                    right = arr[r];
                    return {left, right};
            }
        }
        return {left, right};
    }
};
