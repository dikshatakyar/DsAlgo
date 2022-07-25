#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool canPlace(int x, int y, int &n, vector<vector<int>> &board){
        
        //col
        for(int row = 0; row < n; ++row){
            if(board[row][y] == 1){
                return 0;
            }
        }
        int i = x;
        int j = y;
        //checking for left diagnol
        while(i >= 0 && j >= 0){
            if(board[i][j] == 1){
                return 0;
            }
            --i, --j;
        }
        i = x;
        j = y;
        while(i >= 0 && j < n){
            if(board[i][j] == 1){
                return 0;
            }
            --i, ++j;
        }
        return 1;
    }
        
        
    int findNqueen(int &n, int i, vector<vector<int>> &board){
        int ways = 0;
        if(i == n){
            return 1;
        }
        
        //for each row, we find if queen can be placed at every col
        for(int col = 0; col < n; ++col){
            if(canPlace(i, col, n, board)){
                board[i][col] = 1;
                ways += findNqueen(n, i + 1, board);
                
                board[i][col] = 0;
            }
        }
        return ways;
    }
    
    
    int totalNQueens(int n) {
       vector<vector<int>> board(n,vector<int>(n));
       int i = 0;
       return findNqueen(n,i, board);
    }
};