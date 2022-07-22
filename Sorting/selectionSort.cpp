#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &v, int n){
    for(int i = 0; i < n; ++i){
        cout << v[i] << " ";
    }
    cout << endl;
}

void SelectionSort(vector<int> &arr, int n){
   for(int i = 0; i < n - 1; ++i){
        int minIdx = i;
        for(int j = i + 1; j < n; ++j){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
                // swap(arr[j], arr[i]);
            }
        }
        swap(arr[minIdx], arr[i]);
   }
}


int main(){
    vector<int> v {-2, 3, 4, -1, 5, -12, 6, 1, -15};
    int n = v.size();
    SelectionSort(v, n);
    print(v, n);
}