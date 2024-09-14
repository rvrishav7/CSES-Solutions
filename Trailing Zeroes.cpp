/*
Trailing Zeroes
Problem: https://cses.fi/problemset/task/1618/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
ll count(ll n){
	ll ans=0;
	while(n%5==0){
		ans++;
		n/=5;
	}
	return ans;
}
 
int main(){
	ll n,ans=0;
	cin>>n;
	ll five=5,mul=1;
	while(five<=n){
		ans+=count(five);
		mul++;
		five=5*mul;
	}
	cout<<ans<<endl;
	return 0;
}
