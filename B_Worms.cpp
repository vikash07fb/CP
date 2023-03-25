#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, y) for (int i = x; i < y; i++)
#define sz(v) int((v).size())
#define all(v) (v).begin(), (v).end()
#define gcd __gcd
#define endl "\n"
#define pb push_back
#define ll long long int
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
#define F first
#define S second

typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

int main()
{
    ll n;
    cin>>n;
    vll v(n);
    rep(i,0,n)cin>>v[i];
    ll ind=1;
    map<ll,ll> mp;
    vll tp(n);
    tp[0]=v[0];
    rep(i,1,n)
    {
        tp[i]=v[i]+tp[i-1];
    }
    ll j=0;
    for(ll i=1;i<=tp[n-1];i++)
    {
        if(i>tp[j])
        {
            j++;
            ind++;
        }

        mp[i]=ind;
    }
    ll m;
    cin>>m;
    rep(i,0,m){
        ll x;
        cin>>x;
        cout<<mp[x]<<endl;
    }
}