/*
Rectange Cutting
Problem Link: https://cses.fi/problemset/task/1744/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
ll dp[501][501];

ll memoization(ll n, ll m){ // Gives TLE
	if(n==m)
		return 0;
	ll ans=INT_MAX;
	if(dp[n][m]!=-1)
		return dp[n][m];
	for(int i=1;i<n;i++){
		ans=min(ans,memoization(i,m)+memoization(n-i,m))%MOD;
	}
	for(int i=1;i<m;i++){
		ans=min(ans,(memoization(n,i)+memoization(n,m-i))%MOD);
	}
	return dp[n][m]=(ans>=INT_MAX?INT_MAX:((ans+1)%MOD));
}
ll tabular(ll n, ll m){
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			ll ans=INT_MAX;
			if(i==j)
				continue;
			for(int p=1; p<i;p++)
				ans=min(ans, (1+dp[p][j]+dp[i-p][j])%MOD);
			for(int p=1;p<j;p++)
				ans=min(ans,(1+dp[i][p]+dp[i][j-p])%MOD);
			dp[i][j]=ans;
		}
	}
	return dp[n][m];
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    memset(dp,-1,sizeof(dp));
    ll t=1;
    //cin>>t;
    while(t--){
    	ll n,m;
    	cin>>n>>m;
    	//cout<<memoization(n,m);
    	cout<<tabular(n,m);
    }
    return 0;
}
