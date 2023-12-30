//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        
        vector<string> ans;
        
        unordered_map<string, int> mp;
        
        for(int i = 0; i<n ;i++){
            mp[arr[i]]++;
        }
        
        
        // int count = 0;   // counting checking
        // string s;   // smallest string 
        // int sz = INT_MAX;   // size of the string;
        
        
        int mx = 0;
        for(auto it: mp){
            mx = max(mx, it.second);
        }
        set<string> st;
        for(auto it: mp){
            if(it.second == mx)
                st.insert(it.first);
        }
        auto it = st.begin();
        ans.push_back(*it);
        ans.push_back(to_string(mx));
        return ans;
        
        
        
       
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends