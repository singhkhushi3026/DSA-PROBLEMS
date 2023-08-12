//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        vector<int>v;
        string s;
        map<string,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(auto it:m){
            v.push_back(it.second);
        }
        sort(v.begin(),v.end());
        int z=v.size();
        for(auto it:m){
            if(v[z-2]==it.second){
                s=it.first;
            }
        }
        return s;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends