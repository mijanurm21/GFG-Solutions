//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        unordered_map<char, int> mp;
        
        for(int i = 0; i<s.size(); i++){
            mp[s[i]]++;
        }
        
        priority_queue<pair<int, char>> p;
        
        for(auto it: mp){
            int u = it.second;  // frq
            char v = it.first;   // alphabet
            
            p.push({u,v});
        }
        
       
        
        while(k>0 && !p.empty()){
            auto current = p.top();
            p.pop();
            current.first--;
            
            if(current.first > 0) {
            p.push(current);
            }
        
            k--;
        }
        
        long long sum = 0;
      
        while(!p.empty()){
            auto current = p.top();
            p.pop();
            sum+= pow( current.first, 2);
            
        }
        return sum;
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends