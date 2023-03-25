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

bool check(ll mid,ll n,ll k)
{
    ll noofDiv=mid/n;
    ll tp=mid-noofDiv;
    if(tp>=k)return true;
    else return false;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll l=0;
        ll h=2e9;
        ll ans=h;
        while(l<=h)
        {
            ll mid=(l+h)/2;
            if(check(mid,n,k))
            {
                ans=mid;
                h=mid-1;
            }else l=mid+1;
        }
        cout<<ans<<endl;
    }
}