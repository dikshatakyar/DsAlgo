#include <bits/stdc++.h>
using namespace std;

int tillingways(int n, int m){
    int horizontaltile = 0, verticaltile = 0;
    if(n == 0){
        return 1;
    }
    if(n >= m){
      horizontaltile = tillingways(n - m, m);
    }
    verticaltile = tillingways(n - 1, m);
    //                       
    return horizontaltile + verticaltile;
    
}

int main(){
    int n,m;
    cin >> n >> m;
   cout << tillingways(n, m) << endl;
}