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
   ll a,b,c,d;
   cin>>a>>b>>c>>d;
//    ll l=1;
//    ll h=max(a,c);
//    ll ans=-1;
//    while(l<=h)
//    {
//     ll mid=(l+h)/2;

//     if((a+mid)%b==(c+mid)%d)
//     {
//         ans=mid;
//         h=mid-1;
//     }else l=mid+1;
//    }
//    if(ans==-1)cout<<max(c,a)+1<<endl;
//    else cout<<ans<<endl;

    if((a+1)%b==(c+1)%d){
        cout<<1<<endl;
        return;
    }

    ll tp=lcm(b,d);
    cout<<tp-(a%b)<<endl;
      
    
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
