/*
Increasing Subsequence
Problem Link: https://cses.fi/problemset/task/1145/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
void longestIncreasingSubSequence(vector<ll>&ar, ll n){
	vector<ll>ans;
	ans.push_back(ar[0]);
	for(int i=1;i<n;i++){
		if(ar[i]>ans.back())
			ans.push_back(ar[i]);
		else{
			ll idx=lower_bound(ans.begin(),ans.end(),ar[i])-ans.begin();
			ans[idx]=ar[i];
		}
	}
	cout<<ans.size()<<endl;
	//for(auto &x: ans)
	//	cout<<x<<" ";
}
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

    	for(int i=0;i<n;i++)
    		cin>>ar[i];
    	longestIncreasingSubSequence(ar,n);
    }
    return 0;
}
