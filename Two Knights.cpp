/*
Problem Name: Two Knights
Problem Link: https://cses.fi/problemset/task/1072
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007

inline ll calc_combination(ll n){
	return ((n)*(n-1))/2;
}
inline void calculate(ll n){
	ll total_ways=calc_combination(n*n);
	ll total_possible_attacks=4*(n-1)*(n-2);
	cout<<(total_ways-total_possible_attacks)<<endl;
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1,n=1;
    cin>>t;
    while(t--){
    	calculate(n);
    	n++;
    }
    return 0;
}