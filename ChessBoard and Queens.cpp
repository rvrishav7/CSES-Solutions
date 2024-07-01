/*
ChessBoard and Queens
Problem: https://cses.fi/problemset/task/1624
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define ROW 8
#define COL 8
bool isPlaceable(vector<pair<int,int>>&queens, pair<int,int>p){
	bool canPlace=true;
	int x,y;
	for(int i1=0;i1<queens.size();i1++){
		x=queens[i1].first;
		y=queens[i1].second;

		if(x==p.first||y==p.second)
			canPlace=false;
		ll i=x+1;
		ll j=y+1;
		while(i<8&&j<8){
			if((i==p.first)&&(j==p.second)){
				canPlace=false;
			}
			i++;
			j++;
		}
		i=x+1;
		j=y-1;
		while(i<8&&j>=0){
			if((i==p.first)&&(j==p.second)){
				canPlace=false;
			}
			i++;
			j--;
		}
		if(!canPlace)
			break;
	}
	return canPlace;
}
ll fun(vector<string>&s,vector<pair<int,int>>&queens,int x, int y){
	if(queens.size()==ROW)
	    return 1;
	ll ans=0;
	
	for(int j=0;j<COL;j++){
		if(s[x][j]=='*')
			continue;
		if(isPlaceable(queens,{x,j})){
			queens.push_back({x,j});
			ans+=fun(s,queens,x+1,0);
			queens.pop_back();
		}
	}
	return ans;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1,n;
    //cin>>t;
    while(t--){
       cout<<11111<<end
    }
    return 0;
}
