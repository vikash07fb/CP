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
   vll a(n),b(n);

    rep(i,0,n)cin>>a[i];
    rep(i,0,n)cin>>b[i];
    vll one(n);

    ll ct=0;
    rep(i,0,n)
    {
        if(a[i])ct++;

        one[i]=ct;
    }

    ll ct1=0;
    vll bone(n);
    for(int i=n-1;i>=0;i--)
    {
        if(a[i])ct1++;
        bone[i]=ct1;


    }
    bool ans=false;
    if(a[0]!=b[0])
    {
        N
        return ;
    }

    if(a[n-1]!=b[n-1])
    {
        N
        return ;
    }
    rep(i,1,n-1)
    {
       if(a[i]==b[i])continue;

       if(b[i]==0 && a[i]==1)
       {
        N
        return ;
       }

       if(b[i]==1)
       {
          if(one[i-1] || bone[i+1])
          {
            continue;
          }else {
            N
            return ;
          }
       }
    }

    Y
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
