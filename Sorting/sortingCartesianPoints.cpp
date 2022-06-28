#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> a, pair<int, int> b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
}
 

int main(){
    int n;
    cout << "Total elements ? \n";
    cin >> n;
    vector<pair<int, int>> v(n);
    for(int i = 0; i < n; ++i){
        cin>>v[i].first>>v[i].second;
    }
    cout << endl;
     sort(v.begin(), v.end(), compare);


    for(int i = 0; i < n; ++i){
        cout << v[i].first << " " << v[i].second << endl;
    }
    
}