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
   ll n,k,d,w;
   cin>>n>>k>>d>>w;
   vll v(n);
   rep(i,0,n)cin>>v[i];

   vector<pair<ll,ll>> v1(n);
   rep(i,0,n)
   {
      v1[i].F=v[i];
      v1[i].S=v[i]+w;
   }
   ll ans=1;
   ll i=0;
//    if(v1[i].S+d==v1[n-1].F && n==k)
//    {
//     cout<<1<<endl;
//     return ;
//    }
   while(i<n)
   {ll ct=k;
    ll in=v1[i].S;
    ll out=in+d;
    while(v1[i].F<=out && ct && i<n ){
        i++;
        ct--;
    }
    if(i<n){
        ans++;
    }
   }
   cout<<ans<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}