#include<bits/stdc++.h>
using namespace std;

int ** create2Darray(int rows, int cols){
    int ** arr = new int*[rows]; //creating an array of pointers

    //allocate memory for each row
    for(int i = 0; i < rows; ++i){
        arr[i] = new int[cols];
    }

    //initializing the array with increasing no. of rows
    int value = 0;
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            arr[i][j] = value;
            ++value;
        }
    }
    return arr;
}


int main(){
    //2D dynamic array
    int rows, cols;
    cin >> rows >> cols;

    int ** arr = create2Darray(rows, cols);

    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}