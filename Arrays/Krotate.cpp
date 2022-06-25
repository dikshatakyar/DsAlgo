#include<bits/stdc++.h>
using namespace std;


void reverse(int *arr, int start, int end){
    
    	int l = start, r = end;
      
      	while(l < r){
          	swap(arr[l], arr[r]);
          	l++; r--;
        }
}

vector<int> kRotate(vector<int> a, int k){
    // your code  goes here
    int n = a.size();
    k = k % n;
    reverse(a, 0, k-1);
    reverse(a, k, n-1);
    reverse(a, 0, n-1);
    
}

