#include<bits/stdc++.h>
using namespace std;

int gridWays(int i, int j, int m, int n){
    if(i == m - 1 && j == n - 1){
        return 1;
    }
    if(j >= n || i >= n){ //when the coordinate exceed the size of the grid, dont move
        return 0;
    }
    int ans = gridWays(i + 1, j, m, n)  + gridWays(i, j + 1, m, n);
    return ans;
}


int main(){
    int m, n;
    //m -> rows, n -> cols
    cin >> m >> n;
    int i, j;
    i = j = 0; //intial coordinates
    cout << gridWays(i, j, m, n);
}