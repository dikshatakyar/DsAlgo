#include <bits/stdc++.h>
using namespace std;

void printArray(int n, int *arr){
    for(int i = 0; i < n; ++i){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

void fillArray(int *arr, int i, int val, int n){
    if(i == n){
        printArray(n, arr);
        return;
    }
    arr[i] = val;
    fillArray(arr, i + 1, val + 1, n);

    arr[i] *= (-1);

}

int main(){
    int arr[100] = {0};
    int n;
    cin >> n;
    fillArray(arr,0,1,n);
    cout <<"Whats here : ";
    printArray(n, arr);
}