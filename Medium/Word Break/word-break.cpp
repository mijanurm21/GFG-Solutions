//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// s : given string to search
// dictionary : vector of available strings

class Solution
{
public:
    bool solve(string s, unordered_map<string, int>&mp, int ind){
        if(ind >= s.size()) return true;
        string t;
        for(int i = ind; i<s.size();i++){
            t += s[i];
            
            if(mp.find(t) != mp.end()){
                
                if(solve(s, mp, i+1)) {
                    return true;
                }
            }
        }
        return false;
    }
    int wordBreak(int n, string s, vector<string> &dict) {
        //code here
        unordered_map<string, int> mp;
        
        for(int i = 0; i<n; i++){
            mp[dict[i]]++;
        }
    
        if(solve(s, mp, 0)) return true;
        else return false;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dictionary;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dictionary.push_back(S);
        }
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.wordBreak(n, s, dictionary)<<"\n";
    }
}

// } Driver Code Ends