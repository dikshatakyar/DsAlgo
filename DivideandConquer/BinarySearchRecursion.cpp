#include <bits/stdc++.h>
using namespace std;


int func(vector<int> &v, int i, int n, int x){
    if(i >= n){
        return -1;
    }
    if(v[i] == x){
        return i;
    }
    func(v, i + 1, n, x);
}
  
int main(vector<int> v, int x)
{
    // your code goes here
    int i = 0;
    int n = v.size();
   int idx = func(v, i, n -1 , x);
    // return idx;    
    cout << idx << endl;
}

