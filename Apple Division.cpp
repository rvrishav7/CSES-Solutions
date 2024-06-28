/*
Apple Division
Problem Link: https://cses.fi/problemset/task/1623/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007

ll fun(vector<ll>&ar, ll n, ll sum, ll &total_sum){
	if(n<0)
		return abs(total_sum-(2*sum));
	return min(
		fun(ar,n-1,sum+ar[n],total_sum),
		fun(ar,n-1,sum,total_sum)
		);
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1,n;
    //cin>>t;
    while(t--){
    	ll n,sum=0;
    	cin>>n;
    	vector<ll>ar(n);
    	for(int i=0;i<n;i++){
    		cin>>ar[i];
    		sum+=ar[i];
    	}
    	cout<<fun(ar,n-1,0,sum);
    }
    return 0;
}
