//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        queue<pair<int, int>> q;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dist(n, vector<int>(n,0));
        
        int r = -1, c = -1;
        
        for(int i = 0; i<n ;i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j] == 1 ) q.push({i,j});
                if(grid[i][j] == 2) {
                    r = i;
                    c = j;
                    
                }
            }
        }
        
        int drow[] = {-1,0,1,0};
        int dcol[] = {0,-1,0,1};
        
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            dist[row][col] = 1;
             if(r==row && c==col) return 1;
            
            q.pop();
            for(int i = 0; i<4 ;i++){
                int nrow = row + drow[i];
                int ncol = col + dcol[i];
                
                  if(nrow>=0 && nrow<n && ncol>=0 && ncol<n && (grid[nrow][ncol]==3 || grid[nrow][ncol]==2)){
                    q.push({nrow,ncol});
                }
            }
            
        }
        
        // for(int i = 0; i<n ;i++){
        //     for(int j = 0; j<n; j++){
        //         cout<<dist[i][j];
        //     }
        //     cout<<endl;
        // }
      
        return 0;
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}
// } Driver Code Ends