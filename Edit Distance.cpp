/*
Edit Distance
Problem Link: https://cses.fi/problemset/task/1639/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int dp[5001][5001];

int fun(string &s, string &t, int n, int m){
	if(n<0&&m<0)
		return 0;
	if(n<0)
		return m+1;
	if(m<0)
		return n+1;
	if(dp[n][m]!=-1)
		return dp[n][m];
	if(s[n]==t[m])
		return dp[n][m]=fun(s,t,n-1,m-1);
	
	int ans=INT_MAX;
	ans=min(ans,fun(s,t,n-1,m-1)); //replaced the last character
	ans=min(ans,fun(s,t,n-1,m)); //removed last character from s
	ans=min(ans,fun(s,t,n,m-1)); //added last character at s
	return dp[n][m]=(ans==INT_MAX)?ans:ans+1;
}
void memoization(string &s, string &t, int n, int m){
	memset(dp,-1,sizeof(dp));
	cout<<fun(s,t,n,m)<<endl;
}
void tabular(string &s, string &t, int n, int m){
	dp[0][0]=0;
	for(int i=1;i<=m;i++)
		dp[0][i]=i;
	for(int i=1;i<=n;i++)
		dp[i][0]=i;
	for(int j=1;j<=m;j++){
		for(int i=1;i<=n;i++){
			if(s[i-1]==t[j-1])
				dp[i][j]=dp[i-1][j-1];
			else
				dp[i][j]=1+min({
					dp[i-1][j-1],dp[i-1][j],dp[i][j-1]
				});
		}
	}
	cout<<dp[n][m]<<endl;
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s,t;
    cin>>s>>t;
    //memoization(s,t,s.length()-1,t.length()-1);
    tabular(s,t,s.length(),t.length());
    return 0;
}
