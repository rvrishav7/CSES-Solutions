/*
Book Shop
Problem Link: https://csedps.fi/problemset/task/1158/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int dp[1005][100005];

int fun(vector<int>pages,vector<int>prices, int n, int amount){
	if(amount==0||n<1)
		return 0;
	//if(amount<0)
	//	return INT_MIN;
	int ans=INT_MIN;
	if(dp[n][amount]!=-1)
		return dp[n][amount];
	if(amount>=prices[n])
		ans=max(ans,pages[n]+fun(pages,prices,n-1,amount-prices[n]));
	ans=max(ans,fun(pages,prices,n-1,amount));
	return dp[n][amount]=ans;
}
void memoization(vector<int>pages,vector<int>prices, int n, int amount){
	cout<<fun(pages,prices,n,amount)<<endl;
}
void tabular(vector<int>pages,vector<int>prices, int n, int amount){
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++){
		for(int j=1;j<=amount;j++){
			if(j<prices[i])
				dp[i][j]=dp[i-1][j];
			else
				dp[i][j]=max(pages[i]+dp[i-1][j-prices[i]],dp[i-1][j]);
		}
	}
	cout<<dp[n][amount];
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    memset(dp,-1,sizeof(dp));
    ll n,amount;
    cin>>n>>amount;
    vector<int>pages(n+1),prices(n+1);
    for(int i=1;i<=n;i++)
    	cin>>prices[i];
    for(int i=1;i<=n;i++)
    	cin>>pages[i];
    memoization(pages,prices,n,amount);
    //tabular(pages,prices,n,amount);
    return 0;
}
