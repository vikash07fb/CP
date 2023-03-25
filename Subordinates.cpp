#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define Y  cout<<"YES"<<endl;
#define N  cout<<"NO"<<endl;
 
 
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
 
 
void dfs(ll u,ll parent,ll &ct,vvll &edge,vpll &ans){
	// cout<<u<<" ";
    ans[u].first=ct;
   
 
    for(auto v:edge[u]){
    	if(v!=parent){
              ct++;
    		dfs(v,u,ct,edge,ans);
            ct++;
           
          
    	}
    }
    ans[u].second=ct;
}
int main(){
 	ll n;
	cin>>n;
    vvll edge(n+1,vector<ll>());
	for(int i=1;i<=n-1;i++){
		ll a;
		cin>>a;
		a=a-1;
		ll b=i;
		edge[a].pb(b);
		edge[b].pb(a);
		
	}
    ll ct=1;
    vpll ans(n);
	dfs(0,-1,ct,edge,ans);
    // cout<<endl;
    // for(auto it: ans){
    	// cout<<it.first<<" "<<it.second<<"\n";
    // }
 
 
    for(auto it:ans){
    	cout<<(it.second-it.first)/2<<" ";
    }
}