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
    vll v(n+2);
      map<ll,ll> mp;
      
    rep(i,0,n+2)
    {
        cin>>v[i];
    }
      sort(all(v));
    // rep(i,0,n+2)
    // {
     
     
    // }

    ll sum=0;
    rep(i,0,n+1)
    {
        sum+=v[i];

    }
    // cout<<sum<<endl;
    // rep(i,0,n+1)
    // {
    //     mp[sum-v[i]]++;
    // }
    // mp[v[n+1]]++;
    ll i;
    bool fl=false;
    for(i=0;i<n+1;i++)
    {
         if(sum-v[i]==v[n+1] || sum-v[i]==v[i])
         {
            fl=true;
            break;
         }
    }

    if(!fl)
    {
        cout<<-1<<endl;
        return ;
    }
    for(int j=0;j<n+1;j++)
    {
        if(j!=i)cout<<v[j]<<" ";
    }
    cout<<endl;
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