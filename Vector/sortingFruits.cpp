#include<bits/stdc++.h>
using namespace std;


bool compare(pair<string, int> &fruit1, pair<string, int> &fruit2){
       return fruit1.second < fruit2.second;
}
bool compare1(pair<string, int> &fruit1, pair<string, int> &fruit2){
       return fruit1.first < fruit2.first;
}



int main(){
    vector<pair<string, int>> fruitRange = {
        {"Mango",100},
        {"Guava", 70},
        {"Grapes",40 },
        {"Apple",60 },
        {"Banana",30 }
    };
    cout << "Price or Name? \n";
    string str;
    cin >> str;
    if(str == "price"){
        sort(fruitRange.begin(), fruitRange.end(), compare);
    }
    else{
        sort(fruitRange.begin(), fruitRange.end(), compare1);
    }

    for(int i = 0; i < fruitRange.size(); ++i){
     cout << fruitRange[i].first << " " << fruitRange[i].second << endl;
    }

}