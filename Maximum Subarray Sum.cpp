/*
Maximum Subarray Sum
Problem Link: https://cses.fi/problemset/task/1643/
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
    int t=1,n,val;
   // cin>>t;
    while(t--){
    	ll n,max_sum=INT_MIN,sum=0;
    	cin>>n;
    	vector<ll>ar(n);
    	loop(n)
    		cin>>ar[i];
    	loop(n){
            if(sum+ar[i]>=ar[i]){
                sum+=ar[i];
            }
            else{
                sum=ar[i];
            }
            max_sum=max(max_sum,sum);
        }
        cout<<max_sum;
    	
    }
    return 0;
}