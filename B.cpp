// Problem: B. Books
// Contest: Codeforces - Codeforces Round #171 (Div. 2)
// URL: https://codeforces.com/contest/279/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
  
	ll n,s;
	cin>>n>>s;
	vll v(n);
	
	rep(i,0,n){
		cin>>v[i];
	}
	ll ans=0;
	ll sum=0;
	ll i=0,j=0;
	while(j<n){
		sum+=v[j];
		while(i<=j and sum>s){
			sum-=v[i];i++;
		}
        if(sum<=s)ans=max(ans,j-i+1);
		
		j++;
	}
    cout<<ans;
}