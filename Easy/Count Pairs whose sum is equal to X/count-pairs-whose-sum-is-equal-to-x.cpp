//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void append(struct Node** headRef, struct Node** tailRef, int newData) {
    struct Node* new_node = new Node(newData);

    if (*headRef == NULL) {
        *headRef = new_node;
    }

    else {
        (*tailRef)->next = new_node;
    }
    *tailRef = new_node;
}

void printList(struct Node* head) {
    while (head) {
        cout << head->data << ' ';
        head = head->next;
    }
}


// } Driver Code Ends
/*
Structure of the node of the linked list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
  public:
    // your task is to complete this function
    void solve(Node*  head, unordered_map<int,int>& mp){
        while(head){
            mp[head->data]++;
            head = head->next;
        }
    }
    
    void solve2(Node*  head, vector<int>& v){
        while(head){
            v.push_back(head->data);
            head = head->next;
        }
    }
    
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        unordered_map<int, int> mp;
        vector<int> v;
        
        solve(head1, mp);   // phla wala map m h
        solve2(head2, v);  // second wala vector m h
        
        int count = 0;
        
        for(int i = 0; i<v.size(); i++){
            if(mp.find(x - v[i]) != mp.end()) count++;
        }
        
        return count;
        
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        struct Node* head1 = NULL;
        struct Node* tail1 = NULL;
        struct Node* tail2 = NULL;
        struct Node* head2 = NULL;
        int n1, n2, tmp, x;
        cin >> n1;
        while (n1--) {
            cin >> tmp;
            append(&head1, &tail1, tmp);
        }
        cin >> n2;
        while (n2--) {
            cin >> tmp;
            append(&head2, &tail2, tmp);
        }
        cin >> x;
        Solution obj;
        cout << obj.countPairs(head1, head2, x) << '\n';
    }
    return 0;
}
// } Driver Code Ends