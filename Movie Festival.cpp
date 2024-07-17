/*
Movie Festival
Problem Link: https://cses.fi/problemset/task/1629/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define loop(n) for(int i=0;i<n;i++)
bool fun(pair<ll,ll>&a, pair<ll,ll>&b){
	if(a.second<b.second)
		return true;
	if(a.second>b.second)
		return false;
	return a.second<b.second;
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1,n,end=0,ans=0;
   // cin>>t;
    while(t--){
    	ll n;
    	cin>>n;
    	vector<pair<ll,ll>>shows(n);
    	loop(n)
    		cin>>shows[i].first>>shows[i].second;
    		sort(shows.begin(),shows.end(),fun);
    	loop(n){
    		if(end<=shows[i].first){
    			ans++;
    			end=shows[i].second;
    		}
    	}
    	cout<<ans<<endl;
    }
    return 0;
}