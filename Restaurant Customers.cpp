/*
Restaurant Customers
Problem Link: https://cses.fi/problemset/task/1619/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define loop(n) for(int i=0;i<n;i++)
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1,n,i,k,p;
   // cin>>t;
    while(t--){
    	map<ll,ll>mp;
    	ll n,a,b;
    	cin>>n;
    	while(n--){
    		cin>>a>>b;
    		mp[a]++;
    		mp[b+1]--;
    	}
    	ll ans=0,sum=0;
    	for(auto &x:mp){
    		sum+=x.second;
    		ans=max(ans,sum);
    	}
    	cout<<ans<<endl;
    }
    return 0;
}