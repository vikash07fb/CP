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
   ll r,c;
   ll x1,y1,x2,y2;
   cin>>r>>c;
   cin>>x1>>y1>>x2>>y2;
   ll ct=0,ct1=0;

   if(x1-1>=1 && y1)ct++;
   if(x1 && y1-1>=1)ct++;
   if(x1+1<=r && y1)ct++;
   if(x1 && y1+1<=c)ct++;


   if(x2-1>=1 && y2)ct1++;
   if(x2 && y2-1>=1)ct1++;
   if(x2+1<=r && y2)ct1++;
   if(x2 && y2+1<=c)ct1++;

   cout<<min(ct,ct1)<<endl;
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
