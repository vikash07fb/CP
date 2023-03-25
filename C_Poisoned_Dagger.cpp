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

bool fn(ll mid,vll &v,ll hit)
{   ll sum=0;
    rep(i,1,v.size())
    {
        if(v[i]-v[i-1]<mid)
        {
            sum+=v[i]-v[i-1];
        }else sum+=mid;
    }
    sum+=mid;

    if(sum>=hit)return true;
    else return false;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,hit;
        cin>>n>>hit;
        vll v(n);
        rep(i,0,n)cin>>v[i];

        ll l=1;
        ll h=1e18;
       
        ll ans;
        while(l<=h)
        {
            ll mid=(l+h)/2;

            if(fn(mid,v,hit))
            {
                ans=mid;
                h=mid-1;
            }else l=mid+1;
        }

        cout<<ans<<endl;
    }
}