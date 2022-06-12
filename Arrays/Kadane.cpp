#include<bits/stdc++.h>
using namespace std;
//print sum of each subarray
void printsubarrays(int *arr, int n){
    int largestsum = 0;
    int currentsum = 0;
    for(int i = 0; i < n; ++i){
        currentsum += arr[i]; //doubt
        if(currentsum < 0){
            currentsum = 0;
        }
        largestsum = max(currentsum, largestsum);
    }

    cout << "Largest Sum among all sub arrays : "<< largestsum << endl;
}

int main(){
      int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
      int n = sizeof(arr)/sizeof(int);
      printsubarrays(arr, n);

}
