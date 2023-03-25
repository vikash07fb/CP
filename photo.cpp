// Problem: C. Photographer
// Contest: Codeforces - Codeforces Round #128 (Div. 2)
// URL: https://codeforces.com/contest/203/problem/C
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
bool cmp(pair<vector<ll>,ll> a,pair<vector<ll>,ll> b){
	ll x=a.F[0]+a.F[1];
	ll y=b.F[0]+b.F[1];
	return x<y;
}
int main()
{
	ll n,d,a,b;
	cin>>n>>d;
	cin>>a>>b;
	vector<pair<vector<ll>,ll>> v(n);
	rep(i,0,n)
	{
		ll x,y;
		cin>>x>>y;
		
	    v[i].F.pb(a*x);
	    v[i].F.pb(b*y);
		v[i].S=i+1;
	}
	
	ll ans=0;
	sort(all(v),cmp);
    map<vll,bool>m;
	vll ans1;
	rep(i,0,n)
	{
		ll tp=v[i].F[0]+v[i].F[1];
	
		if(d-tp>=0){
		    ans1.pb(v[i].S);
			ans++;
			d-=tp;
		}else break;
	}
	cout<<ans<<endl;
	for(auto it:ans1)cout<<it<<" ";
}