// Problem: https://cses.fi/problemset/task/1633

//Solution:
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//vector<int>ar={1,2,3,4,5,6};
#define MOD 1000000007

ll dp[1000001];
ll fun(ll n){
    if(n==0)
        return 1;
    if(n<0)
        return 0;
    if(dp[n]!=-1)
        return dp[n];
    ll sum=0;
    for(int i=1;i<=6;i++)
        sum=((sum%MOD)+(fun(n-i)%MOD))%MOD;
    return dp[n]=sum;
}

// Below Approach used Memoization Approachm, ie Top Down Approach Solution
void solution1(ll n){
    memset(dp,-1,sizeof(dp));
    cout<<fun(n)<<endl;
}
// Below is Tabluar Approach ie Bottom's Up Solution
void solution2(ll n){
    vector<ll>ar(n+1);
    ar[0]=1;
    for(int i=1;i<=n;i++){
        ll sum=0;
        for(int j=1;j<=6;j++){
            if(i-j<0)
                break;
            sum=((sum%MOD)+((ar[i-j])%MOD))%MOD;

        }
        ar[i]=sum%MOD;

    }
    cout<<ar[n];
}
int main(){
    ll t=1,n;
    //cin>>t;
    cin>>n;
    solution1(n);
    //solution2(n);
    return 0;
}
