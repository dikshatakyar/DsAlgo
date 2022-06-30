#include<bits/stdc++.h>
using namespace std;
//print sum of each subarray
void printsubarrays(int *arr, int n){
   int prefixarr[100] = {0};
   prefixarr[0] = arr[0];
   for(int i = 1; i < n; ++i){
       prefixarr[i] = prefixarr[i - 1] + arr[i];
   }
   int largestsum = 0;
   for(int i = 0; i < n; ++i){
       for(int j = i; j < n; ++j){
           int subarray_sum = i > 0 ? prefixarr[j] - prefixarr[i - 1] : prefixarr[j];
           largestsum = max(largestsum, subarray_sum);
       }
   }
    cout << "Largest Sum among all sub arrays : "<< largestsum << endl;
}

int main(){
      int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
      int n = sizeof(arr)/sizeof(int);
      printsubarrays(arr, n);

}
