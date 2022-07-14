#include<bits/stdc++.h>
using namespace std;

void decsum(int n){
    if(n == 0){
        return;
    }
    cout << n << " ";
    decsum(n-1);
}

void incsum(int n){
    if(n == 0){
        return;
    }
    incsum(n - 1);
    cout << n << " ";
}


int main(){
    int n;
    cin >> n;
   decsum(n);
   cout << endl;
   incsum(n);
}