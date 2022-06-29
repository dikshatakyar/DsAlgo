//Brute force

// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends


class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>>& matrix1, int n) 
    { 
        // code here 
        vector<vector<int>>matrix2(n, vector<int>(n));
        int rowstart = 0, colend = n-1;
        while(colend >= 0){
            for(int row = 0, col = 0; row < n && col < n; ++row, ++col){
            matrix2[rowstart][col] = matrix1[row][colend];
            }
        colend--;
        rowstart++;
        }
        matrix1 = matrix2;
    } 
};


// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.rotateby90(matrix, n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends