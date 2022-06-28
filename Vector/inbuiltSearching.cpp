#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {10,20,30,40,50,60,70,80};
    int key;
    cin >> key;
    
    vector<int>::iterator it = find(arr.begin(), arr.end(), key);
    for(int i = 0; i < arr.size(); ++i){
        cout << &arr[i] << " ";
    }
    cout << &it << endl;
    cout << &(*arr.begin()) << endl;
    if(it != arr.end()){
        cout << "Element at "<< it - arr.begin() << endl;
    }
    else{
        cout << "Element not found \n";
    }
}