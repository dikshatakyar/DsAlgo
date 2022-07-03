#include<bits/stdc++.h>
using namespace std;

int totalMarks(vector<int> marks){
    return marks[0] + marks[1] + marks[2];
}

bool compare(pair<string, vector<int>> &s1, pair<string, vector<int>> &s2){
    vector<int> m1 = s1.second;
    return totalMarks(m1) > totalMarks(s2.second);
} 

int main(){
    vector<pair<string, vector<int>>> student_marks = {
        {"Simran", {10, 20, 11}},
        {"Sahil",{14, 12, 16}},
        {"Sagar",{9, 5, 15}},
        {"Raghav",{18, 9, 1}}
    };

    sort(student_marks.begin(), student_marks.end(), compare);

    for(int i = 0; i < student_marks.size(); ++i){
        cout << student_marks[i].first << " " << totalMarks(student_marks[i].second) << endl;
    }

}