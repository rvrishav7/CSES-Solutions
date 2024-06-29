/*
Tower of Hanoi
Problem Link: https://cses.fi/problemset/task/2165/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int c=0;
vector<pair<ll,ll>>ans;
void fun(ll n, ll source, ll target, ll mid){
	if(n==0)
		return;
	fun(n-1,source,mid,target);
	ans.push_back({source,target});
	fun(n-1,mid,target,source);
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1,n;
    //cin>>t;
    while(t--){
    	cin>>n;
    	fun(n,1,3,2);
    	cout<<ans.size()<<endl;
    	for(auto &x:ans)
    		cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}
