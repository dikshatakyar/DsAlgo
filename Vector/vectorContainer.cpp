#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    arr.push_back(18);

    vector<int> visited(10,1);
    for(int i = 0; i < visited.size(); ++i){
        cout << visited[i] << " ";
    }
    // cout << arr.size() << endl;
    // cout << arr.capacity() << endl; //doubles the size
}