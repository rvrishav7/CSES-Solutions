/*
Apartments
Problem Link: https://cses.fi/problemset/task/1084/
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
    int t=1,n,i,k,p;
   // cin>>t;
    while(t--){
    	ll n,m,k,j=0,ans=0;
        cin>>n>>m>>k;
        vector<ll>people(n),apartment(m);
        loop(n)
            cin>>people[i];
        loop(m)
            cin>>apartment[i];
        sort(people.begin(),people.end());
        sort(apartment.begin(),apartment.end());
        loop(n){
        	while(j<m){
	        	if(apartment[j]<(people[i]-k)){
	        		j++;
	        		continue;
	        	}
	        	if(apartment[j]>(people[i]+k)){
	        		break;
	        	}
	        	ans++;
	        	j++;
	        	break;
        	}
        }
        cout<<ans<<endl;
    }
    return 0;
}