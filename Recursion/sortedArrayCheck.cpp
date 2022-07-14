#include<bits/stdc++.h>
using namespace std;

bool sortedCheck(int arr[], int n){
    if(n == 0 || n == 1){
        return true;
    }
    if(arr[0] < arr[1] && sortedCheck(arr+1, n - 1)){
        return true;
    }
    return false;
}


int main(){
    int arr[] = {1,2,3,5,4,6};
    int n = sizeof(arr)/sizeof(int);
    cout << endl;
    cout << sortedCheck(arr,n);
}