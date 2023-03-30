#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, y) for (int i = x; i < y; i++)
#define sz(v) int((v).size())
#define all(v) (v).begin(), (v).end()
#define gcd __gcd
#define endl "\n"
#define pb emplace_back
#define ll long long int
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
#define F first
#define S second
const int mod=1e9+7;

typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

void solve()
{
   ll n;
   cin>>n;
   vll v(n);
   set<ll> s;
   map<ll,vll> mp;
   rep(i,0,n){
    cin>>v[i];
    s.insert(v[i]);
    // mp[v[i]].pb(i);
   }
   for(auto it:s)
   {
    mp[it].pb(-1);
   }

   rep(i,0,n)mp[v[i]].pb(i);
   for(auto it:s)
   {
    mp[it].pb(n);
   }
   if(s.size()==1)
   {
    cout<<0<<endl;
    return ;
   }
   if(s.size()==n)
   {
    cout<<1<<endl;
    return ;
   }

   ll ans=1e9;
   for(auto it:mp)
   {
    ll ct=0;
    vll v1=it.S;
    
    // for(auto it1:v1)cout<<it1<<" ";
    // cout<<endl;
    for(int i=1;i<v1.size();i++)
    {
        if(v1[i]-v1[i-1]>1)ct++;
    }
    // cout<<ct<<endl;
    if(ct)
    ans=min(ans,ct);
   }

   cout<<ans<<endl;
}
int main()
{   ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
