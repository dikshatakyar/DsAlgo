#include<bits/stdc++.h>
using namespace std;
const int n = 3;
const int m = 3;

void spiralPrint(int arr[n][m]){
    int startRow = 0;
    int endRow = n - 1;
    int startCol = 0;
    int endCol = m - 1;
     vector<int> ans;
    while(startCol <= endCol && startRow <= endRow){

        //startRow
        for(int col = startCol; col <= endCol; ++col){
            cout << arr[startRow][col] << " ";
            //ans.push_back(arr[start....])
        }
        //endCol
        for(int row = startRow + 1; row <= endRow; ++row){
            cout << arr[endCol][row] << " ";
        }
        //endRow
        for(int col = endCol -1 ; col >= startCol; col--){
            if(startRow == endRow){
                break;
            }
            cout << arr[endRow][col] << " "; 
        }
        //startCol
        for(int row = endRow - 1; row >= startRow + 1; --row){
            if(startCol == endCol){
                break;
            }
            cout << arr[row] [startCol] << " ";
        }
        startRow++;
        endCol--, endRow--, startCol++;
    }
}


int main(){
    // int n, m;
    // cout << "Total rows? \n";
    // cin >> n;
    // cout << "Total columns? \n";
    // cin >> m;
    int arr[n][m];
    cout << "Enter the elements \n";
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> arr[i][j];
        }
    }
    spiralPrint(arr);
}