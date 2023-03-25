// Problem: B. Towers
// Contest: Codeforces - Codeforces Round #274 (Div. 2)
// URL: https://codeforces.com/contest/479/problem/B
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
 
int main()
{
	ll n,m;
	cin>>n>>m;
	vll v(n);
	ll k=m;
	// map<ll,ll> mp;
	multiset<pair<ll,ll>> st;
	ll mi=INT_MAX,ma=INT_MIN;
	for(int i=0;i<n;i++){
		cin>>v[i];
		
		st.insert({v[i],i+1});
		mi=min(mi,v[i]);
		ma=max(ma,v[i]);
	}
	ll ans1=ma-mi;
	// cout<<ans1<<endl;
    vector<pair<ll,ll>> ans;
    
    while(m--  ){
    	auto it=*(st.rbegin());
    	auto it1=*(st.begin());
    	// cout<<it<<" "<<it1<<endl;
        ll i=it.S;
        ll j=it.F;
        // if(it==it1)break;
      
	    ans.pb({i,j});
		st.erase(st.find(*st.begin()));
		st.erase(st.find(*st.rbegin()));
      ll a= it.F--;
      ll b=it1.F++;
        
		st.insert({a,i});
	    st.insert({b,j});
		auto c=*(st.rbegin());
    	auto d=*(st.begin());
        if(ans1>c.F-d.F){
       ans1=c.F-d.F;
			
     }else break; 
      
       
    }
   
    cout<<ans1<<" "<<k-m<<endl;
	for(int i=0;i<m;i++){
		cout<<ans[i].F<<" "<<ans[i].S<<endl;
	}
}