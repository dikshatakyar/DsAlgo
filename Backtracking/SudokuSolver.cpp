#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlace(vector<vector<char>> &board, int row, int col, char ch){
        
        for(int i = 0; i < 9; ++i){
            
            if(board[row][i] == ch){
                return false;
            }
            if(board[i][col] == ch){
                return false;
            }
            if(board[3 * (row/3) + i/3][3 * (col/3) + i%3] == ch){
                return false;
            }
        }
        
        return true;
    }
    
    
    bool isSudoku(vector<vector<char>> &board, int i, int j){
        
        if(i == 9){
            //print
            return true;
        }
        
        if(j == 9){
            return isSudoku(board, i + 1, 0);
        }
        
        if(board[i][j] != '.'){
            return isSudoku(board, i, j + 1);
        }
        
        for(char ch = '1'; ch <= '9'; ++ch){
            if(canPlace(board, i, j, ch)){
                board[i][j] = ch;
            
                if(isSudoku(board, i, j + 1) == true){
                    return true;
                }
                board[i][j] = '.';
            }
        }
        
        return false;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        isSudoku(board, 0, 0);
    }
};