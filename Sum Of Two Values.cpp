/*
Sum of Two Values
Problem Link: https://cses.fi/problemset/task/1640/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define loop(n) for(int i=0;i<n;i++)
bool cmp(pair<ll,ll>&a, pair<ll,ll>&b){
	return (a.first < b.first);
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1,n,val;
   // cin>>t;
    while(t--){
    	ll n,l,h,target;
    	cin>>n>>target;
    	vector<pair<ll,ll>>ar(n);
    	loop(n){
    		cin>>val;
    		ar[i]={val,i+1};
    	}
    	sort(ar.begin(),ar.end(),cmp);
    	l=0;
    	h=n-1;

    	while(l<h){

    		if(ar[l].first+ar[h].first==target)
    			break;
    		if(ar[l].first+ar[h].first>target)
    			h--;
    		else
    			l++;
    	}
    	if(l>=h)
    		cout<<"IMPOSSIBLE"<<endl;
    	else
    		cout<<ar[l].second<<" "<<ar[h].second<<endl;
    }
    return 0;
}