#include<bits/stdc++.h>
using namespace std;


int main(){
    // char a[] = {'a','b','c','d'}; //terminate a character with a null character, otherwise garbarge value
    // char a[] = "abcd";
    // cout << a << endl;
    // cout << strlen(a) << endl;
    // cout << sizeof(a) << endl;

    char sentence[100];
    char len = 0;
    char temp = cin.get();
    while(temp != '#'){
        sentence[len++] = temp;
        temp = cin.get();
    }
    sentence[len] = '\0';
    cout << "Length : "<< len << endl;
    cout << sentence;

}