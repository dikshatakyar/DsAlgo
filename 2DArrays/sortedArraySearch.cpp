//staircase algorithm
#include<bits/stdc++.h>
using namespace std;

pair<int, int> staircaseSearch(int arr[][4], int n, int m, int key){
    if(key < arr[0][0] || key > arr[n - 1][m - 1]){
        return {-1, -1};
    }
    int row = 0;
    int col = m - 1;

    while(row <= n -1 && col >= 0){
        if(arr[row][col] == key){
            return {row, col};
        }
        else if(arr[row][col] > key){
            col--;
        }
        else{
            ++row;
        }
    }
    return{-1, -1};
}



int main(){
    int arr[][4] = {{10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50}
                    };

    int n = 4, m = 4, key = 18;
    pair<int, int> ind = staircaseSearch(arr, n, m, key);
    cout << ind.first << " " << ind.second << endl;
}