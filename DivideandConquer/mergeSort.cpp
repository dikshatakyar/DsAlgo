#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s,int m, int e){
    int l = s;
    int r = m + 1;
    int k = s;
    int temp[100];
    while(l <= m && r <= e){
        if(arr[l] > arr[r]){
            temp[k++] = arr[r++];
        }
        else{
            temp[k++] = arr[l++];
        }
    }
    while(l <= m){
        temp[k++] = arr[l++];
    }
    while(r <= e){
        temp[k++] = arr[r++];
    }
    for(int i = s; i <= e; ++i){
        arr[i] = temp[i];
    }

}


void mergesort(int *arr, int s, int e){
    if(s >= e ){
        return;
    }
    int mid = (s + e)/2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    merge(arr, s, mid, e);
}



int main(){
    int arr[] = {10,5,2,0,7,6,4};
    int s = 0;
    int e = sizeof(arr)/sizeof(int);
    mergesort(arr, s, e - 1);
    
    for(int i = 0; i < e; ++i){
        cout << arr[i] << " ";
    }
}