#include<bits/stdc++.h>
using namespace std;


int distance(pair<int, int> &c1){
    return c1.first + c1.second;
}


bool compare(pair<int, int> &c1, pair<int, int> &c2){
    return distance(c1) < distance(c2);
}

void sortCabs(vector<pair<int, int>> &c1){
     sort(c1.begin(), c1.end(), compare);
}


int main(){
    vector<pair<int,int>> cabs(5);
    for(int i = 0; i < cabs.size(); ++i){
        cin >> cabs[i].first >> cabs[i].second ;
    }
    cout << endl;
    sortCabs(cabs);
    for(int i = 0; i < cabs.size(); ++i){
        cout << cabs[i].first << " " << cabs[i].second << endl;
    }
}