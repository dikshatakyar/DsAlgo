#include<bits/stdc++.h>
using namespace std;

void print(int board[][20], int n){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cout << board[i][j] <<" ";
        }
        cout << endl;
    }
    cout << endl;
}

bool canPlace(int board[][20], int n, int i, int j){
     
     //checking if any queen was placed in the same column : col remain constant, row changes
     for(int row = 0; row < i; ++row){
        if(board[row][j] == 1){
            return false;
        }
     }
       //checking for left diagonol
        int row = i;
        int col = j;
        while(row >= 0 && col >= 0){
            if(board[row][col] == 'Q'){
                return false;
            }
            --row, --col;
        }
        
        //checking for right diagonal
        row = i;
        col = j;
        while(row >=0 && col < n){
            if(board[row][col] == 'Q'){
                return false;
            }
            --row, ++col;
        }

    return true;
}

bool FindNqueen(int board[][20], int n, int i){
    if(i == n){
        print(board, n);
        return true;
    }
    //for every row, we try to place the queen in every column 
    for(int j = 0; j < n; ++j){
        if(canPlace(board, n, i, j)){
            board[i][j] = 1; //placing the queen
            bool success = FindNqueen(board, n, i + 1); //go to the next row
            if(success){
                return true;
            }
            //backtrack
            board[i][j] = 0; //removing the queen;
        }
    }
    return false; //after finishing entire row(all cols have been checked in the current row), if the queen could not be placed, then we tell previous row something is wrong with your configuration

}

int main(){
    int board[20][20] = {0};
    int n;
    cin >> n;
    int i = 0;
    FindNqueen(board, n, 0);
}