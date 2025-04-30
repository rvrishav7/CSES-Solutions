/*
Subordinates
Problem Link: https://cses.fi/problemset/task/1674/
*/
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
 
int dfs(vector<vector<int>>&gr, vector<int>&ans, int s){
    int count=0;
    for(auto &x: gr[s])
        count+=dfs(gr,ans,x);
    ans[s]=count;
    return count+1;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1,n,i,k,p,count=0,v;
   // cin>>t;
    while(t--){
        int n,val;
        cin>>n;
        vector<vector<int>>graph(n+1);
        vector<int>ans(n+1);
        for(int i=2;i<=n;i++){
            cin>>val;
            graph[val].push_back(i);
        }
        dfs(graph,ans,1);
        for(int i=1;i<=n;i++)
            cout<<ans[i]<<" ";
    }
    return 0;
}