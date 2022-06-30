#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        vector<int> rowVisited(m,1), colVisited(n,1);
        
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                if(matrix[i][j] == 0){
                    //set i,j zero
                    rowVisited[i] = 0;
                    colVisited[j] = 0;
                }
            }
        }
        
        for(int i = 0; i < m; ++i){
            if(rowVisited[i] == 0){
                for(int j = 0; j < n; ++j){
                    matrix[i][j] = 0;
                }
            }
        }
        
        for(int j = 0; j < n; ++j){
            if(colVisited[j] == 0){
                for(int i = 0; i < m; ++i){
                    matrix[i][j] = 0;
                }
            }
        }
            
    }
};