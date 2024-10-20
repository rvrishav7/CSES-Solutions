/*
Digit Queries
Problem Link: https://cses.fi/problemset/task/2431/
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
    cin>>t;
    while(t--){
    	ll k;
    	cin>>k;
    	if(k<10)
    		cout<<k<<"\n";
    	else{
    		ll range=9,digits=1,tens=1,num,q,r,ans,prev_range=range;
    		while(k>range){
    			tens*=10;
    			digits++;
    			prev_range=range;
    			range+=(9*tens*digits);
    		}
    		range=(k-prev_range); 

    		q=(range/digits);
    		r=(range%digits);

    		if(!r){
    			q--;
    			r=digits;
    		}
    		num=(tens)+(q);

    		while(digits-r+1){
    			ans=(num)%10;
    			num/=10;
    			r++;
    		}
    		cout<<ans<<endl;
    	}
    }
    return 0;
}