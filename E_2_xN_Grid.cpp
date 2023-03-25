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
  
  ll l,n,m;
  cin>>l>>n>>m;
  vvll v(2,vll(l,0));
  ll pt1=0;
  rep(i,0,n)
  { ll x,y;
    cin>>x>>y;
    rep(j,0,y)
    {
        v[0][pt1]=x;
        pt1++;
    }

  }
  ll pt=0;
  rep(i,0,m)
  { ll x,y;
    cin>>x>>y;
    rep(j,0,y)
    {
        v[1][pt++]=x;
    }

  }
  ll ans=0;
  rep(i,0,l){
     if(v[0][i]==v[1][i])ans++;
  }

  cout<<ans;
 

}
int main()
{   ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    
    solve();
}
