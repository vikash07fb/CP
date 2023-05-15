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
   ll n,c,d;
   cin>>n>>c>>d;
   vll v(n);
   set<ll> s;
   rep(i,0,n){
    cin>>v[i];
    s.insert(v[i]);
   }
   ll ans=0;
   ans+=(n-s.size())*c;
   vll v1;
   for(auto it:s)v1.pb(it);
   for(auto it:v1)cout<<it<<" ";
   cout<<endl;

   bool fl=true;
   for(int i=0;i<v1.size();i++)
   {
      if(v1[i]!=i+1)
      {
        fl=!fl;
        break;
      }
   }
   if(fl){
    cout<<0<<endl;
    return ;
   }
   ll ans1=(v1.size)*d+c;
   while()
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
