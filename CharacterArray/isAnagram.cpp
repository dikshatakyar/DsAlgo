// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        int n = a.length();
        int m = b.length();
        if(n != m){
            return false;
        }
        int count[26] = {0};
        for(int i = 0; i < n; ++i){
            count[a[i] - 97]++;
        }
        for(int i = 0; i < m; ++i){
            count[b[i] - 97]--;
        }
          for(int i = 0; i < 26; ++i){
            if(count[i] != 0){
                return false;
            }
        }
    return true;
        
       
    }

};

// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends