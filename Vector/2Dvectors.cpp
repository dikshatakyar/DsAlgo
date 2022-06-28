#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> arr = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9, 10},
      {11, 12}
    };
  
    int n = arr.size();
  	// int m = arr[0].size();   when number of columns are same in every row
    
    for(int i = 0; i < n; i++){
        int m = arr[i].size();
        for(int j = 0; j < m; j++){
          	cout << arr[i][j] << " ";
        }
      	cout << endl;
    }
}