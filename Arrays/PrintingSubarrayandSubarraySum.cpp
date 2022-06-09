#include<bits/stdc++.h>
using namespace std;
//print sum of each subarray
void printsubarrays(int *arr, int n){
    int sum;
    int largestsum = 0;
    for(int i = 0; i < n; ++i){
        for(int j = i; j < n; ++j){
            int sum = 0;
            for(int k = i; k < j; ++k){
                cout << arr[k] << " ";
                sum += arr[k];
            }
            largestsum = max(sum, largestsum);
            cout << endl;
        }
    }
    cout << "Largest Sum among all sub arrays : "<< largestsum << endl;
}

int main(){
      int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
      int n = sizeof(arr)/sizeof(int);
      printsubarrays(arr, n);

}
