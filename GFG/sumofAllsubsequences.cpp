//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	int subsequenceSum(string s) 
	{
	    // Your code goes here
	    int n = s.size();
	    int sum = 0;
	    int numPow = pow(2, n - 1);
	    
	    for(int i = 0; i < n; ++i){
	        sum += numPow * (s[i] - 48);
	    }
	    
	    return sum;
	}
};

//{ Driver Code Starts.



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

   		cout << ob.subsequenceSum(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends

