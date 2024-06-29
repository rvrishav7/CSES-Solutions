/*
Palindrome Reorder
Problem Link: https://cses.fi/problemset/task/1755/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
ll dp[100001];
 
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1;
    //cin>>t;
    while(t--){
    	string s;
        cin>>s;
        map<char,int>mp;
        for(auto &x: s)
            mp[x]++;
        char odd_char='\0';
        int odd_count=0;
        for(auto &x:mp){
            if(x.second&1){
                odd_count++;
                odd_char=x.first;
            }
        }
        if(odd_count>1){
            cout<<"NO SOLUTION\n";
            return 0;
        }
        mp[odd_char]--; //make it even
        ll l=0,h=s.length()-1;
        auto p=mp.begin();
        while(l<h){
            if(p->second>0){
                s[l++]=p->first;
                s[h--]=p->first;
                p->second-=2;
            }
            else
                p++;
        }
        //cout<<"odd char "<<odd_char<<" "<<" "<<odd_count<<endl;
        if(odd_char!='\0')
            s[s.length()/2]=odd_char;
        cout<<s<<endl;
    }
    return 0;
}
