#include <bits/stdc++.h>
using namespace std;

int qpartition(int *arr, int s, int e){
    int pivot = arr[e];
    int i = s - 1;

    for(int j = s; j < e; ++j){
        if(arr[j] < pivot){
            // swap(arr[i + 1], arr[j]);
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[e]);
    return i + 1;
}


void quicksortfunc(int *arr, int s, int e){
    if(s >= e){
        return;
    }
    int p = qpartition(arr, s, e);
    quicksortfunc(arr, s, p - 1);
    quicksortfunc(arr, p + 1, e);
}

int main(){
    int arr[] = {10,5,2,0,7,6,4};
    int s = 0;
    int e = sizeof(arr)/sizeof(int);
    quicksortfunc(arr, s, e - 1);
    
    for(int i = 0; i < e; ++i){
        cout << arr[i] << " ";
    }
}