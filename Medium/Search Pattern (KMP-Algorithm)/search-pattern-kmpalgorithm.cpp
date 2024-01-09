//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            //code here
            int m = txt.size();
            int n = pat.size();
            vector<int> ans;
            
            for(int i=0;i<txt.size();i++)
            {   
                int cnt=0;
                bool flag=0;
                for(int j=0;j<pat.size();j++)
                {
                    if(txt[i+cnt] != pat[j])  // 0-3
                    {
                        flag=1;
                        break;
                    }
                    cnt++;
                }
                cnt=0;
                if(flag==0)  // j wala loop khtm hone k baad bhi flag 0 h to mil gya 
                    ans.push_back(i+1);
            }
            
            if(ans.size()>0)
                return ans;
            return {-1};
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
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends