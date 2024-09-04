/*
Josephus Problem I
Problem Link: https://cses.fi/problemset/task/2162/
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define loop(n) for(int i=0;i<n;i++)

typedef struct llist{
	int val;
	llist *next,*prev;
}llist;
int main() { // 1 2 3 4 5 6 7 8
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    //cin>>t;

    while(t--){
		int n;
		cin>>n;
		llist ar[n+1];
		for(int i=1;i<=n;i++){
			ar[i].val=i;
			if(i<n){
				ar[i].next=&ar[i+1];
				ar[i+1].prev=&ar[i];
			}
		}
		ar[n].next=&ar[1];   
		ar[1].prev=&ar[n];
		llist *front=&ar[1], *curr=ar[1].next,*temp;
		while(n--){
			cout<<curr->val<<" ";
			(curr->prev)->next=curr->next;
			(curr->next)->prev=curr->prev;
			curr=(curr->next)->next;
		}
		cout<<endl;
    }
    
    return 0;
}