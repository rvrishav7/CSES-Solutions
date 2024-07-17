/*
Distinct Numbers
Problem Link: https://cses.fi/problemset/task/1621/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1,n,i,k,p;
   // cin>>t;
    while(t--){
    	int n,sum=0;
    	cin>>n;
    	vector<ll>ar(n);
    	map<ll,bool>mp;
    	for(int i=0;i<n;i++){
    		cin>>ar[i];
    		mp[ar[i]]=true;
    	}
    	cout<<mp.size();
    }
    return 0;
}