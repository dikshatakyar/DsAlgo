#include<bits/stdc++.h>
using namespace std;

int computepow(int n, int p){
    if(p == 0){
        return 1;
    }
    return n * computepow(n, p - 1);
}



int main(){
    int n, p;
    cin >> n >> p;
   cout << computepow(n,p);
}