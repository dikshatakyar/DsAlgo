#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int binary_to_decimal(string str) {
        // Code here.
        int ans;
        int j = 0;
        int n = str.length();
        for(int i = n - 1; i >=0 ; --i){
            if(str[i] == '1'){
                ans+= pow(2, j);
            }
            ++j;
        }
        return ans;
    }
};