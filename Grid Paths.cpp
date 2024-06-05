/*
Grid Paths
Problem Link: hhttps://csedps.fi/problemset/task/1638/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int dp[1001][1001];
int fun(vector<vector<char>>&grid,vector<vector<bool>>&visited, int n,int i, int j){
	if(i<0||j<0||i==n||j==n)
		return 0;
	if(visited[i][j]||grid[i][j]=='*')
		return 0;
	if(i==n-1&&j==n-1)
		return 1;
	if(dp[i][j]!=-1)
		return dp[i][j];
	return dp[i][j]=((fun(grid,visited,n,i+1,j)%MOD)+(fun(grid,visited,n,i,j+1)%MOD))%MOD;
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    memset(dp,-1,sizeof(dp));
    ll n;
    cin>>n;
    vector<vector<char>>grid(n,vector<char>(n));
    vector<vector<bool>>visited(n,vector<bool>(n,false));
    for(int i=0;i<n;i++)
    	for(int j=0;j<n;j++)
    		cin>>grid[i][j];
    cout<<fun(grid,visited,n,0,0);
    return 0;
}
