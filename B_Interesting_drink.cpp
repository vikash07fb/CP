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
    sort(all(v));
    ll q;
    cin>>q;
    rep(i,0,q)
    {
        ll x;
        cin>>x;
        if(x<v[0]){
            cout<<0<<endl;
            continue;
        }
        if(x>=v[n-1])
        {
            cout<<n<<endl;
            continue;
        }
        // ll l=0;
        // ll h=n-1;
        // ll ind=-1;
        // while(l<=h)
        // {
        //     ll mid=(l+h)/2;
        //     if(v[mid]==x)
        //     {
        //        ind=mid;
        //     }
        //     if(v[mid]<x)
        //     {
        //         l=mid+1;
        //         ind=mid;
        //     }else {
        //         h=mid-1;
        //     }
        // }
        // if(ind!=-1)
        // {
        //     cout<<ind+1<<endl;
        // }else cout<<l+1<<endl;
     cout<<   upper_bound(v.begin(), v.end(), x)-v.begin()<<endl;
 }
}