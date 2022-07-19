#include<bits/stdc++.h>
using namespace std;


void print(vector<int> &v, int n){
    for(int i = 0; i < n; ++i){
        cout << v[i] << " ";
    }
    cout << endl;
}

void bubbleSort(vector<int> &arr, int n){
    for(int i = 0; i < n - 1; ++i){
        bool isSorted = false;
       for(int j = 0; j < n - 1 - i; ++j){
        if(arr[j] > arr[j + 1]){
            swap(arr[j], arr[j + 1]);
            isSorted = true;
        }
       }
        if(isSorted == false){
            return;
        }
    }
}


int main(){
    vector<int> v {-2, 3, 4, -1, 5, -12, 6, 1, -15};
    int n = v.size();
    bubbleSort(v, n);
    print(v, n);
}