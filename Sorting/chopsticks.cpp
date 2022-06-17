#include<bits/stdc++.h>
using namespace std;

int findingpairs(int *L, int n, int d){
    int pairs = 0;
    for(int i = 0; i < n - 1; ++i){
        int a = L[i];
        int b = L[i + 1];
        if((b - a) <= d){
            ++pairs;
            ++i;
        }
    }
    return pairs;
}


int main(){
    int n, d;
    cin >> n >> d;
    int L[n];
    for(int i = 0; i < n; ++i){
        cin >> L[i];
    }
    sort(L, L + n);
    int pairs = findingpairs(L, n, d);
    cout << "Total pairs : "<< pairs << endl;
}