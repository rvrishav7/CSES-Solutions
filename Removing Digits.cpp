/*
Removing Digits
Problem Link: hhttps://csedps.fi/problemset/task/1637
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int dp[1000001];
inline void getDigits(ll n, vector<bool>&digits){
	while(n){
		digits[n%10]=true;
		n/=10;
	}
}
int fun(ll n){
	if(n==0)
		return 0;
	if(dp[n]!=-1)
		return dp[n];
	vector<bool>digits(10,false);
	getDigits(n,digits);
	int temp=INT_MAX;
	for(int i=1;i<10;i++){
		if(digits[i])
			temp=min(temp,fun(n-i));
	}
	return dp[n]=1+temp;
}
void memoization(ll n){
	memset(dp,-1,sizeof(dp));
	cout<<fun(n);
}
void tabular(int n){
	dp[0]=0;
	int digits[10];
	for(int i=1;i<=n;i++){
		vector<bool>digits(10,false);
		getDigits(i,digits);
		int temp=INT_MAX;
		for(int num=1;num<10;num++){
		if(digits[num])
			temp=min(temp,dp[i-num]);
		}
		dp[i]=temp+1;
	}
	cout<<dp[n];
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;

    //memoization(n);
    tabular(n);
    return 0;
}
