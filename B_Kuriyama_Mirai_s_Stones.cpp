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

     vll a(n);
     rep(i,0,n)a[i]=v[i];
     sort(all(a));
     rep(i,1,n)
     {
        v[i]+=v[i-1];
        a[i]+=a[i-1];
     }
    

     ll m;
     cin>>m;
     rep(i,0,m)
     {
        ll x,y,z;
        cin>>x>>y>>z;
        if(x==1)
        {   if(y==1)cout<<v[z-1]<<endl;
            else 
            cout<<v[z-1]-v[y-2]<<endl;
        }else {
             if(y==1)cout<<a[z-1]<<endl;
             else cout<<a[z-1]-a[y-2]<<endl;
        }
     }
}