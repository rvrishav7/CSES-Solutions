/*
Creating Strings
Problem Link: https://cses.fi/problemset/task/1622/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
int c=0;
vector<string>ans;
void fun(map<char,ll>&mp, string s, int len){
	if(len==0){
		ans.push_back(s);
		return;
	}
	for(auto &x: mp){
		if(!x.second)
			continue;
		s.push_back(x.first);
		x.second--;
		fun(mp,s,len-1);
		x.second++;
		s.pop_back();
	}
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1,n;
    //cin>>t;
    while(t--){
    	string s;
    	cin>>s;
    	map<char,ll>mp;
    	for(auto &x: s)
    		mp[x]++;
    	string temp;
    	fun(mp,temp,s.length());
    	cout<<ans.size()<<endl;
    	for(auto &x: ans)
    		cout<<x<<endl;
    }
    return 0;
}
