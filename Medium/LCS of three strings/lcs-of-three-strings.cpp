//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int t[21][21][21];
        int lcs(string a,string b,string c,int i,int j,int k){
            if(i==0 || j== 0 || k==0) return 0;
            
            if (t[i][j][k] != -1) return t[i][j][k];
            if(a[i-1] == b[j-1] && b[j-1] == c[k-1]){
                return t[i][j][k] = 1 + lcs(a,b,c,i-1,j-1,k-1);
            }
            else{
                int l = lcs(a,b,c,i-1,j,k);
                int m = lcs(a,b,c,i,j-1,k);
                int n = lcs(a,b,c,i,j,k-1);
                return t[i][j][k] = max({l,m,n});
            }
    }

        int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
        {
            // your code here
            memset(t,-1,sizeof(t));
            return lcs(A,B,C,n1,n2,n3);
        }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        Solution obj;
        cout << obj.LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends