//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int blackbox(vector<vector<int>> &mat, int n){
        int count= 0;
        
        for(int i = 0; i<mat.size(); i++){
            count += upper_bound(mat[i].begin(), mat[i].end(), n) - mat[i].begin();
        }
        return count;
    }
    int median(vector<vector<int>> &mat, int n, int m){
        // code here    
        int l = INT_MAX, h = INT_MIN;

    
        for (int i = 0; i < n; i++) {
            l = min(l, mat[i][0]);
            h = max(h, mat[i][m-1]);
        }
    
        int req = (n * m) / 2;
    
        while (l <= h) {
            int mid = (l + h) / 2;
            int count = blackbox(mat, mid);
    
            if (count <= req) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
    
        return l;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends