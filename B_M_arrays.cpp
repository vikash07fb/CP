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
   ll n,m;
   cin>>n>>m;
   vll v(n);
   rep(i,0,n)
   {
    cin>>v[i];
    v[i]=v[i]%m;
   }
   map<ll,ll> mp;
   rep(i,0,n)mp[v[i]]++;

   ll ans=0;

   if(mp[0])ans+=1;

   rep(i,1,m)
   {
    if(mp[i]  && mp[m-i])
    {
        ans+=1;
        ans+=max(0,abs(mp[m-i]-mp[i])-1);
        mp.erase(m-1);
    }else {
        ans+=mp[i];
    }

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
