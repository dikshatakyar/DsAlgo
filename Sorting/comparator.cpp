#include<bits/stdc++.h>
using namespace std;


bool comp(int a, int b){
    return a < b;
}

int main(){
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    // int arr[] = {1, 3, 5, 7, 9};
     int n = sizeof(arr)/sizeof(int);
     bool flag = false;
     if(flag){
     sort(arr, arr + n, comp);
     }
     if(!flag){
     sort(arr, arr + n, greater<int>());
     }

     for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
     }
     
}