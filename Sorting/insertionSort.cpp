#include<bits/stdc++.h>
using namespace std;


void insertionSort(int *a, int n){
    for(int i = 1; i < n; ++i){
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key){
            swap(a[j+ 1], a[j]);
            j--;
        } 
    a[j + 1] = key;
    }
}




int main(){
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    // int arr[] = {1, 3, 5, 7, 9};
     int n = sizeof(arr)/sizeof(int);
     insertionSort(arr, n);

     for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
     }
     
}