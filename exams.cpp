// Problem: C. Vanya and Exams
// Contest: Codeforces - Codeforces Round #280 (Div. 2)
// URL: https://codeforces.com/contest/492/problem/C
// Memory Limit: 256 MB
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
 
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

bool cmp(pll a,pll b){
	return a.S<b.S;
}
int main()
{
	ll n,r,avg;
	cin>>n>>r>>avg;
	ll tp=n*avg;
	vvll v(n);
	for(int i=0;i<n;i++){
		ll x,y;
		cin>>x>>y;
		tp-=x;
		v[i].pb(x);
		v[i].pb(y);
	}
	if(tp<=0){
		cout<<0;
		return 0;
	}
	vpll v1;
	rep(i,0,n){
		if(v[i][0]<r){
			v1.pb({r-v[i][0],v[i][1]});
		}
	}
	sort(all(v1),cmp);
	// for(auto it:v1)cout<<it.F<<" "<<it.S<<endl;
    ll ans=0;
    rep(i,0,v1.size()){
    	if(tp){
    		if(tp>=v1[i].F){
    			ans+=v1[i].F*v1[i].S;
    			tp-=v1[i].F;
    		}else {
    			ans+=tp*v1[i].S;
    			tp=0;
    		}
    	}else break;
    
    }
    	cout<<ans;
}