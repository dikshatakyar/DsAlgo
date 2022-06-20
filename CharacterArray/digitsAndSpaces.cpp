#include<bits/stdc++.h>
using namespace std;


int main(){
    char ch;
    ch = cin.get();
    int alpha, num, space;
    alpha = num = space = 0;
    while(ch != '\n'){
        if(ch >= 'a' && ch <= 'z' || ch>= 'A' and ch<='Z'){
            ++alpha;
        }
        else if(ch >= '1' && ch<= '9'){
            ++num;
        }
        else if(ch == ' ' || ch == '\t'){
            ++space;
        }
        ch = cin.get();
    }

    cout << "Total Alphabets "<< alpha << endl;
    cout << "Total Numbers "<< num << endl;
    cout << "Total Spaces "<< space << endl;
}
