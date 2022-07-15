#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isZero(vector<int> arr){
        for(int i = 0; i < 26; ++i){
            if(arr[i] != 0){                
                return false;
            }
        }
         return true;
    }
    
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(); //size of string
        int m = p.size(); //size of substring
        vector<int> arr(26,0);
        int left = 0, right = m - 1;
        vector<int> storeInd;
        
        if(m > n){
            return storeInd;
        }
        
        for(int i = 0; i < m; ++i){
          arr[p[i] - 'a']++;
        }
        
        for(int i = left; i <=right; ++i){
            arr[s[i] - 'a']--;
        }
        
        if(isZero(arr)){
            storeInd.push_back(left);
        }
        ++left, ++right;
        
        while(right < n){
            arr[s[left - 1] - 'a']++;
            arr[s[right] - 'a']--;
            
            if(isZero(arr)){
                storeInd.push_back(left);
            }
            ++left, ++right;
        }
       return storeInd;
    }
};