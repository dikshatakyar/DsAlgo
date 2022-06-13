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


/* in case all values are negative in an array
#include<bits/stdc++.h>
using namespace std;

int maxSumSubarray(vector<int> A) {
    int curr_sum = 0;
    int maxm_sum = 0;
    
  	bool pos = false;
  	int max_num = A[0];
  
    for(int i = 0; i < A.size(); ++i){
        curr_sum += A[i];
        if(curr_sum < 0){
            curr_sum = 0;
        }
      	if(A[i] > 0) pos = true;
        max_num = max(max_num, A[i]); 
        maxm_sum = max(curr_sum, maxm_sum);
    }
  	
  	if(pos == false){
      return max_num;
    }
    return maxm_sum;
}
*/