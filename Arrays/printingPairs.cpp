#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr)/sizeof(int);
    for(int i = 0; i < size ; ++i){
        for(int j = i + 1; j < size; ++j){ 
            cout << arr[i] <<","<< arr[j] << endl;
        }
        cout << endl;
    }
    
}