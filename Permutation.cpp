/*
Permutations
Problem Link: https://cses.fi/problemset/task/1070/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
ll dp[100001];

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1,p,l,h;
    //cin>>t;
    while(t--){
    	ll n;
    	cin>>n;
    	if(n<4&&n>1){
    		cout<<"NO SOLUTION\n";
    		continue;
    	}
    	vector<int>ar(n);
    	l=1;
    	h=n;
    	p=h;
    	ar[0]=ceil(double(n)/2);
    	if(!n&1){
    		ar[n-1]=n/2+1;
    		n--;
    	}
    	for(int i=1;i<n;i++){
    		ar[i]=p;
    		if(p==l){
    			p=h;
    			l++;
    		}
    		else{
    			p=l;
    			h--;
    		}
    	}
    	for(auto &x: ar)
    		cout<<x<<" ";
    }
    return 0;
}
