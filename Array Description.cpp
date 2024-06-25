/*
Array Description
Problem Link: https://cses.fi/problemset/task/1746/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
ll dp[100001][101];

ll fun(ll *ar, ll &m, ll n, ll last){
	if(n<0)
		return 1;
	// if(last>m||last<1)
	// 	return 0;
	if(ar[n]&&abs(ar[n]-last)>1)
		return 0;
	if(dp[n][last]!=-1)
		return dp[n][last];
	if(ar[n])
		return fun(ar,m,n-1,ar[n]);
	ll ans=0;
	if(last==0){
		for(int i=1;i<=m;i++){
			ans=(ans+fun(ar,m,n-1,i))%MOD;
		}
	}
	else{
		ans=(ans+fun(ar,m,n-1,last))%MOD;
		if(last-1>=1)
			ans=(ans+fun(ar,m,n-1,last-1))%MOD;
		if(last+1<=m)
			ans=(ans+fun(ar,m,n-1,last+1))%MOD;
	}
	return dp[n][last]=ans%MOD;
}
void memoization(ll *ar, ll n,ll m){
	memset(dp,-1,sizeof(dp));
	cout<<fun(ar,m,n-1,ar[n-1]);
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    //cin>>t;
    while(t--){
    	ll n,m;
    	cin>>n>>m;
    	ll ar[n];
    	for(int i=0;i<n;i++)
    		cin>>ar[i];
    	memoization(ar,n,m);
    }
    return 0;
}
