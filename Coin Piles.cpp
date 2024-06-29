/*
Coins Piles
Problem Link: https://cses.fi/problemset/task/1754/
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
    ll t=1;
    cin>>t;
    while(t--){
    	ll a,b;
        cin>>a>>b;
        if(a<b)
        	swap(a,b);
        if(min(a,b)==0&&max(a,b))
        	cout<<"NO\n";
        else if((2*b-a)%3==0&&(2*b-a>=0))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}