//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    
	     vector<int> alpha(26, 0);
	    int n = s.size(), mx = 0;
	    for(int i=0; i<n; i++){
	        alpha[s[i]-'a']++;
	        mx = max(mx, alpha[s[i]-'a']);
	    }
	    int c = 0, k = 0, che = true;
	    for(int i=0; i<26; i++){
	        if(alpha[i]!=0){
	            if(alpha[i] != mx){
	                che = false;
	            }
	            if(alpha[i] == 1){
	                k++;
	            }
	            else if(alpha[i] != mx){
	                k = 5;
	            }
	        }
	    }
	    if(che || k<=1){
	        return true;
	    }
	    for(int i=0; i<26; i++){
	        if(alpha[i]!=0){
	            if(alpha[i] == mx && c==0){
	                c++;
	            }
	            else if(alpha[i] == mx-1){
	                continue;
	            }
	            else{
	                return false;
	            }
	            k++;
	        }
	    }
	    return true; 
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends