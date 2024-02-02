//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    bool check(char ac ){
        int val = ac - '0';
        if(ac>=48 && ac<=57 ){
            return true;
        }
        return false;
    }
    int atoi(string s) {
        //Your code here
        int n = s.size();
        int num = 0;
        bool flag = false;
        
        
        
        
        
        for(int i = 0; i<n; i++){
            if(s[i] == '-' && i == 0) {
            flag = true;
            continue;
            // break;
            }
            
            if(s[i] >= 48 && s[i] <= 57) num = num * 10 + (s[i] - '0');
            
            else{
                return -1;
            }
            
            
        }
        if(flag) return -num;
        return num;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends