//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		long long int PowMod(long long int x,long long int n,long long int m)
		{
		    // Code here
		   
		    
		        if(x%m==0)return 0;
		     
                if(n==0)return 1;
                if(n==1)return x%m;
                
                if(n%2==0)return PowMod((x*x)%m,n/2,m)%m;
                return (x*PowMod(x,n-1,m))%m;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int x, n, m;
    	cin >> x >> n >> m;
    	Solution ob;
    	long long int ans = ob.PowMod(x, n, m);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends