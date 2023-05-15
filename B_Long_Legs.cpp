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
   ll x,y;
   cin>>x>>y;
   ll lg=1;
//    if(x==y)
//    {
//     cout<<x+1<<endl;
//     return ;
//    }else 
   if(max(x,y)%min(x,y)==0 && min(x,y)!=1)
   {
    ll ans=0;
    ll b=min(x,y);
    ans=b+max(x,y)/min(x,y);
    cout<<ans<<endl;
    return ;
   }else {
    ll a=min(x,y);
    ll b=min(x,y);

    ll ans1=0,ans2=0;
    ans1+=a;
    ans2+=a;
    lg =a;
    while(b%lg==1)
    {
        ans1++;
        lg++;
    }
    ans1+=b/lg;

    ll tp=b/a;
    tp--;
    ans2+=tp;
    b-=tp*a;
    ans2+=b-a;
    ans2++;


    cout<<min(ans1,ans2)<<endl;

   }
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
