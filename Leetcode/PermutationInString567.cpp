#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isZero(vector<int> &arr){
        for(int i = 0; i < 26; ++i){
            if(arr[i] != 0){
                return false;
            }
        }
        return true;
    }
    
    bool checkInclusion(string s1, string s2) {
          int n = s1.size(), m = s2.size();
          int left = 0;
          int right = n - 1;
    
          vector<int> arr(26, 0);
            if(n > m){
                return false;
            }
            for(int i = 0; i < n; ++i){
                arr[s1[i] - 'a']++;
            }
            for(int i = left; i <= right; ++i){
                arr[s2[i] - 'a']--;        
            }
        
            if(isZero(arr)){
                return true;
            }
            ++left, ++right;
        
            while(right < m){
                arr[s2[right] - 'a']--;
                arr[s2[left - 1] - 'a']++;
                
                if(isZero(arr)){
                    return true;
                }
                ++left, ++right;
            }
      return false;  
    }
};