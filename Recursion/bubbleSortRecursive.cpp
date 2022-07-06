#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n, int j){
    if(n == 1 || n == 0){
        return;
    }
    if(j == n - 1){
        bubbleSort(arr, n - 1, 0);
        return;
    }
    if(arr[j] > arr[j + 1]){
        swap(arr[j], arr[j + 1]);
    }
    bubbleSort(arr, n, j + 1); //outer loop
}


int main(){
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    // int arr[] = {1, 3, 5, 7, 9};
     int n = sizeof(arr)/sizeof(int);
     int j = 0;
     bubbleSort(arr, n, j);

     for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
     }
     
}