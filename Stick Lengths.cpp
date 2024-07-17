/*
Stick Lengths
Problem Link: https://cses.fi/problemset/task/1074/
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
    int t=1,n,val,median=0;
   // cin>>t;
    while(t--){
    	ll n,ans=0;
    	cin>>n;
    	vector<ll>ar(n);
    	loop(n)
    		cin>>ar[i];
    	sort(ar.begin(),ar.end());
    	if(n&1)
            median=ar[n/2];
        else
            median=(ar[n/2]+ar[n/2-1])/2;
       // cout<<median<<endl;
        loop(n){
            ans+=(abs(ar[i]-median));
        }
        cout<<ans;
    	
    }
    return 0;
}