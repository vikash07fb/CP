// Problem: B. Sorting the Coins
// Contest: Codeforces - Codeforces Round #441 (Div. 1, by Moscow Team Olympiad)
// URL: https://codeforces.com/problemset/problem/875/B
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
#define  rep(i,x,y)   for(int i=x ; i<y ; i++)
#define  sz(v)    int((v).size())
#define  all(v)  (v).begin(), (v).end()
#define  gcd  __gcd
#define  endl "\n"
#define pb push_back
#define ll long long int
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
#define F first 
#define S second
#define get(v) rep(i,0,n)cin>>v[i];
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
 
int main()
{
  
	ll n;
	cin>>n;
	vll v(n);
    get(v);
	
    ll j=n-1;
	vll ans(n+1);
	ans[0]=1;
	vll vis(n,0);
	rep(i,0,n){
		vis[v[i]-1]=1;
		while(vis[j]==1){
			j--;
		}
		ans[i+1]=i+1-(n-j-1)+1;
	}
    for(auto it:ans)cout<<it<<" ";
}