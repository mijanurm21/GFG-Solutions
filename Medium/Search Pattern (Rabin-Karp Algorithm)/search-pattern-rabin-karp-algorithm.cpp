//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            //code here.
            int n = pattern.size(), m = text.size();
            
            string temp = "";
            
            vector<int> ans;
            int i = 0;
            
            while(i<m){
                temp+=text[i];
                
                if(temp.size() < n){
                    i++;
                }
                else{
                    if(temp == pattern){
                        ans.push_back(i-n+2);
                    }
                    temp.erase(0,1);
                    i++;
                }
            }
            return ans;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends