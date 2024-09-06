/*
Room Allocation
Problem Link: https://cses.fi/problemset/task/1164/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define loop(n) for(int i=0;i<n;i++)
typedef struct customer
{
	int start,end,index;
}customer;

bool cmp(customer &a, customer&b){
	if(a.start<b.start)
		return true;
	if(a.start>b.start)
		return false;
	return a.end<b.end;
}
int main() { 
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;
 
    while(t--){
		ll n;
		cin>>n;
		vector<int>ans(n);
		customer ar[n];
		loop(n){
			cin>>ar[i].start>>ar[i].end;
			ar[i].index=i;
		}
		sort(ar,ar+n,cmp);
		priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>q; //{checkout_date,roomNo}
		q.push({0,1});

		loop(n){
			pair<ll,ll>top;
			if(q.top().first<ar[i].start){
				top=q.top();
				q.pop();
			}
			else{
				top.second=q.size()+1; //add new room
			}
			top.first=ar[i].end;
			ans[ar[i].index]=top.second;
			q.push(top);
		}
		cout<<q.size()<<endl;
		loop(n)
			cout<<ans[i]<<" ";
    }

    return 0;
}
