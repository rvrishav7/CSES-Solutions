/*
Towers
Problem Link: https://cses.fi/problemset/task/1073/
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
    int t=1;
    //int n,val=-1,count=0;
    
    while(t--){
    	ll n;
    	cin>>n;
    	vector<ll>ar(n);
    	loop(n)
    		cin>>ar[i];
    	vector<int>ans;
    	for(int i=0;i<n;i++){
    		auto p=upper_bound(ans.begin(),ans.end(),ar[i]);
    		if(p==ans.end())
    			ans.push_back(ar[i]);
    		else
    			*p=ar[i];
    		
    	}
    	cout<<ans.size()<<endl;
    	//for(auto &x: ans)
    	//	cout<< x<<" ";
    }
    return 0;
}