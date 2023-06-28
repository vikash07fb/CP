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
    vll v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    ll s=0;
    ll c=0;
    vll b;

    for(int i=0;i<n;i++)
    {
        if(v[i]==0 && c>0)
        {
            c++;
        }else if(v[i]<0)
        {
            c++;
        }else {
            b.pb(c);
            c=0;
        }

        s+=abs(v[i]);
    }

    ll f=0;
    b.pb(c);
    for(auto it:b)
    {
        if(it!=0)f+=1;
    }
    cout<<s<<" "<<f<<endl;
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
