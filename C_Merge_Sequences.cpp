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
  vll a(n);
  vll b(m);
   vll c;
  map<ll,ll> m1;
  rep(i,0,n)
  {
    cin>>a[i];
    c.pb(a[i]);
  }
  rep(i,0,m){
    cin>>b[i];
    c.pb(b[i]);
  }
  sort(all(c));
//   rep(i,0,n+m)cout<<c[i]<<" ";
//   cout<<endl;
  rep(i,0,n+m)m1[c[i]]=i+1;

  rep(i,0,n){
    cout<<m1[a[i]]<<" ";
  }
  cout<<endl;
  rep(i,0,m)cout<<m1[b[i]]<<" ";
 

}
int main()
{   ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    
    solve();
}
