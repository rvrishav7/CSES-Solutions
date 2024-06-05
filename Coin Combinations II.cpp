/*
Coin Combinations II
Problem Link: https://cses.fi/problemset/task/1636/
Note: CSES will throw TLE for Memoization Appproach because of it's very tight time and space constraints. It's given below for your understanding.
Thus, Kindly use Tabular Method
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int dp[101][1000005];

int fun(vector<ll>&ar, int n, int sum){
	if(sum==0)
		return 1;
	if(n<1||sum<0)
		return 0;
	if(dp[n][sum]!=-1)
		return dp[n][sum];
	return dp[n][sum]= ((fun(ar,n,sum-ar[n])+fun(ar,n-1,sum))%MOD);
}
void memoization(vector<ll>&ar, ll &n, ll sum){
	memset(dp,-1,sizeof(dp));
	cout<<fun(ar,n,sum);
}
void tabular(vector<ll>&ar, ll &n, ll &sum){
	memset(dp,0,sizeof(dp));
	for(int i=0;i<=n;i++) // sum=0, always there is one way by not choosing any coin
		dp[i][0]=1;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=sum;j++){
			if(ar[i]>j)
				dp[i][j]=dp[i-1][j];
			else
				dp[i][j]=(dp[i][j-ar[i]]+dp[i-1][j])%MOD;
		}
	}
	cout<<dp[n][sum];
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll sum,n;
    cin>>n>>sum;
    vector<ll>ar(n+1);
    for(int i=1;i<=n;i++)
    	cin>>ar[i];
    memoization(ar,n,sum);
    //tabular(ar,n,sum);
    return 0;
}
