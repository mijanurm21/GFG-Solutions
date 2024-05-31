//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    // Code here.
	    int l = 1, h = m;
	    int ans = 0;
	    
	    if(m == 1 || m == 0) return m;
	    
	    while(l<=h){
	        int mid = l + (h - l) / 2;
	        
	        long long tot = 1;
	        for(int i = 0; i<n; i++){
	            tot*=mid;
	            if(tot > m) break;
	        }
	        
	        if(tot == m) return mid;
	        
	        if(tot > m) {
	            h = mid-1;
	        }
	        else l= mid+1;
	    }
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends