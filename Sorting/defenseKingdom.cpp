#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int w,h,n;
    while(t--){
        cin >> w >> h >> n;
        vector <int> x(n), y(n);

         if(n == 0){
            cout << (w * h) << endl;
            continue;
        }
        for(int i = 0; i < n; ++i){
            cin >> x[i] >> y[i];
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        int max_x = x[0] - 1;
        int max_y = y[0] - 1;

        for(int i = 1; i < n; ++i){
            max_x = max(max_x, x[i] - x[i - 1] - 1);
            max_y = max(max_y, y[i] - y[i - 1] -1);
        }
        max_x = max(max_x, w - x[n - 1]);
        max_y = max(max_y, h - y[n - 1]);

        cout << (max_x * max_y);
    }

}