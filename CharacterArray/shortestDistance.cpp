#include<bits/stdc++.h>
using namespace std;


int main(){
    char routes[100];
    cin.getline(routes,100);
    int x, y;
    x = y = 0;
    for(int i = 0; routes[i] != '\0'; ++i){
        switch (routes[i])
        {
        case 'N' : ++y; break;
        case 'S' : --y; break;
        case 'E' : ++x; break;
        case 'W' : --x; break;
        }
    }
    cout << "Final x and y is  : "<< x << "," << y << endl;

    if(x >= 0 and y>=0){
        while(y--){
            cout << "N";
        }
        while(x--){
            cout << "E";
        }
    }
}