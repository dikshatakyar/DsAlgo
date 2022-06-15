#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    // your code goes here
  //BRUTE FORCE
    // if(v[0] > x){
    //     return -1;
    // }
    // for(int i = 0; i < n; ++i){
    //     if(x < v[i]){
    //         return i-1;
    //     }
    //     else if(x == v[i]){
    //         return i;
    //     }
    // }
    // return n-1;
    
    //OPTIMISED
    int s = 0;
    int e = n - 1;
    if(v[0] > x){
        return -1;
    }
    if(v[n - 1] <= x){
       return n-1;
    }  
    while(s <= e){
       int mid = (s + e)/2;
        if(v[mid] > x){
            e = mid - 1;
        }
        else if(v[mid] < x){
            s = mid + 1;
        }
        else if(v[mid] == x){
            return mid;
        }  
        else if(s == e){
            return s -1;
        }

        
     } 
    return e - 1;
        
    
}

int main(){
    
}