/*
Ferris Wheel
Problem Link: https://cses.fi/problemset/task/1090/
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
    	ll n,m,x,j=0,ans=0,l,h;
        cin>>n>>x;
        vector<ll>people(n);
        loop(n)
            cin>>people[i];
        sort(people.begin(),people.end());
       	l=0;
       	h=n-1;
        while(l<=h){
        	if(l==h){
        		ans++;
        		break;
        	}
        	if(people[l]+people[h]<=x){
        		l++;
        		h--;
        	}
        	else
        		h--;
        	ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}