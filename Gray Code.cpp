/*
Gray Code
Problem Link: https://cses.fi/problemset/task/2205/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
 
 void generate_list(vector<string>&ans, int len){
 	while(--len){
 		vector<string>temp;
 		for(int j=0;j<ans.size();j++)	// add 0 as MSB
 			temp.push_back("0"+ans[j]);
 		for(int j=ans.size()-1;j>=0;j--) // add 1 as MSB 
 			temp.push_back("1"+ans[j]);
 		ans=temp;
 	}
 }

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1,n;
    //cin>>t;
    while(t--){
    	cin>>n;
    	vector<string>ans;
    	ans.push_back("0");
    	ans.push_back("1");
    	generate_list(ans,n);
    	for(auto &x: ans)
    		cout<<x<<endl;
    }
    return 0;
}