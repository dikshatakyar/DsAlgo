#include<bits/stdc++.h>
using namespace std;

void printSeries(vector<int> &ans, int n, int i){
    if(n == i){
        return;
    }
    if(n != i){
        ans.push_back(i);
    }
    printSeries(ans, n - 1, i + 1);
}

vector<int> increasingNumbers(int n) {
    vector<int> ans;
    int i = 1;

    printSeries(ans, n, i);

    return ans;
}