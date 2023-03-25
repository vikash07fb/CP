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
   ll n,ans=0;
   cin>>n;
   ll sum=0;
   vll v(n);
   rep(i,0,n){
    cin>>v[i];
    sum+=v[i];
   }
  
   ll y=(2*sum);
   if(y%n){
    cout<<0<<endl;
    return ;
   }
   y/=n;

//    cout<<y<<endl;
   unordered_map<ll,ll> mp;
   rep(i,0,n)mp[v[i]]++;

   rep(i,0,n)
   {
    ans+=mp[y-v[i]];

    if(y-v[i]==v[i])ans--;
   }
   
   cout<<ans/2<<endl;
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