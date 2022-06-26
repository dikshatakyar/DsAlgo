// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
		//geeksgeeks
		//visited[26] = {0};
		
		
	string removeDups(string s) 
	{
	    // Your code goes here
        int n = s.length();
        int visited[26] = {0};
        string ans = "";
        for(int i = 0; i < n; ++i){
            if(visited[s[i] - 'a'] == 0){
                visited[s[i] - 'a']++;
                ans+= s[i];
            }
        }
        return ans;
	}
};

// { Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}  // } Driver Code Ends