/*
Removal Game
Problem Link: https://cses.fi/problemset/task/1097/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
vector<ll>get_digits(19,0);
ll dp[5001][5001];
ll fun(vector<ll>&ar, ll l , ll h){
	if(h<l)
		return 0;
	if(dp[l][h]!=-1)
		return dp[l][h];
	
	ll ans= max(ar[l]+min(fun(ar,l+2,h),fun(ar,l+1,h-1)),
		ar[h]+min(fun(ar,l+1,h-1),fun(ar,l,h-2)));

		return dp[l][h]=ans;
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1,n,i,k,p;
   // cin>>t;
    while(t--){
    	ll n;
    	cin>>n;
    	vector<ll>ar(n);
    	memset(dp,-1,sizeof(dp));
    	for(int i=0;i<n;i++)
    		cin>>ar[i];
    	cout<<fun(ar,0,n-1);
    }
    return 0;
}