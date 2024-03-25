//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    void f(int n , string ds , vector<string>&ans ){
    // cout << n << endl ;
    if(ds.size()==n){
        int one=0 , zero=0 ;
        for(int i=0;i<ds.size();i++){
            if(ds[i]=='1')one++ ;
            if(ds[i]=='0')zero++ ;
            if(one>=zero) continue ;
            else break ;
        }
        if(one>=zero){
            ans.push_back(ds) ;
       }
        return ;
    }
    ds+= '1' ;
    f(n , ds , ans) ;
    ds.pop_back() ;
    ds+='0' ;
    f(n , ds , ans) ;
    
}
    
	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	     string ds ="" ;
        vector<string>ans ;
        f(n, ds , ans ) ;
        return ans ;
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
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends