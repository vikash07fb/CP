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
   string s;
   char c;
   cin>>c>>s;

   ll fl1=0;
   rep(i,0,n)
   {
    if(s[i]!=c)
    {
        fl1++;
    }
   }
   if(fl1==0)
   {
    cout<<0<<endl;
    return ;
   }
   vll ans;

   bool fl=false;

   rep(i,1,n+1)
   {
        bool ok=true;
        rep(j,i,n+1)
        {
            ok&= (s[j-1]==c);
            j+=i-1;
        }
        if(ok)
        {
            ans.pb(i);
            fl=true;
            break;
        }
   }
   if(fl==false)
   {
      ans.pb(n);
      ans.pb(n-1);
   }

   cout<<ans.size()<<endl;

   for(auto it:ans)cout<<it<<" ";
   cout<<endl;

   return ;
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