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
   ll a,b;
   cin>>a>>b;
   bool rt=true,lf=true,up=true,left=true;

   ll ans=abs(a)+abs(b);
   ll c=abs(a);
   ll d=abs(b);
   ans+=max(c,d)-min(c,d)-1;
   if(c==d)ans++;
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