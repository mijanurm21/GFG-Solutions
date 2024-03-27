//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
int dfs(int i,int j,vector<vector<int>>&mat,bool flag){
        int n = mat.size() , m = mat[0].size();
        if(j == m-1 ) return 1;
        if(mat[i][j] == -1) return 1e9;
        if(j + 1 < m && mat[i][j+1] == 1) return 1 + dfs(i,j+1,mat,flag);
        int ans = 1e9;
        if(flag && i-1 >= 0) ans = min(ans , 1 + dfs(i-1,j,mat,flag));
        if(!flag && i + 1 < n) ans = min(ans , 1 + dfs(i+1,j,mat,flag));
        return ans;
    } 
    int findShortestPath(vector<vector<int>> &mat)
    {
       // code here
       int dx[4] = {1,0,-1,0};
       int dy[4] = {0,1,0,-1};
       int n = mat.size() , m = mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    mat[i][j]=-1;
                    if(i-1>=0 and mat[i-1][j]==1) mat[i-1][j]=-1;
                    if(i+1<n and mat[i+1][j]==1) mat[i+1][j]=-1;
                    if(j-1>=0 and mat[i][j-1]==1) mat[i][j-1]=-1;
                    if(j+1<m and mat[i][j+1]==1) mat[i][j+1]=-1;
                }
            }
        }
      int ans = INT_MAX;
      for(int i = 0; i < n ;i++){
          if(mat[i][0] == 1){
              ans  = min(ans, dfs(i,0,mat,true));
              ans  = min(ans, dfs(i,0,mat,false));
          }
      }
      if(ans>=1e9) return -1;
      else return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int R, C;
        cin >> R >> C;
        vector<vector<int>> mat(R, vector<int>(C));
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cin >> mat[i][j];
            }
        }

        Solution ob;
        int ans = ob.findShortestPath(mat);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends