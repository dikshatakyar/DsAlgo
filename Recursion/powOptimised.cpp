//logn
#include<bits/stdc++.h>
using namespace std;

int computepow(int n, int p){
    if(p == 0){
        return 1;
    }
    int powsubset = computepow(n, p/2);
    int ans = powsubset * powsubset;
    if(p&1){
       return n * ans;
    }
    return ans;
}



int main(){
    int n, p;
    cin >> n >> p;
   cout << computepow(n,p);
}