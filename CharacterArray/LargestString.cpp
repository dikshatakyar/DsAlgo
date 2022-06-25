#include<bits/stdc++.h>
using namespace std;

//read n strings and print the largest string

int main(){
    int n;
    cin >> n;

    cin.get(); 

    char sentence[100];
    char largest[100];
    int largest_len = 0;

    while(n--){
        cin.getline(sentence, 100);
        int len = strlen(sentence);
        if(len == largest_len){
            if(sentence > largest) // considers ascii value
            strcpy(largest, sentence);
        }
        if(len > largest_len){
            largest_len = len;
            strcpy(largest,sentence);
        }
    }
    cout << "Largest Sentence is : "<< largest << endl;
}