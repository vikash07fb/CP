#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, y) for (long long int i = x; i < y; i++)
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


bool check(ll n, ll num) {
    ll left = 1, right = n;
    while (left <= right) {
        ll mid = (left + right) / 2;
        ll quotient = num / mid;
        ll remainder = num % mid;
        if (remainder == 0 && 1 <= quotient && quotient <= n) {
            return true;
        } else if (quotient < left) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return false;
}




void solve()
{   
   ll n,m;
   cin>>n>>m;
//    ll l=m;
//    ll h=1e12;
   ll ans=-1;
//    while(l<h)
//    {
//     ll mid=(l+h)/2;
//     if(check(n,mid))
//     {
//         ans=mid;
//         h=mid-1;
//     }else l=mid+1;
//    }
   rep(i,m,1e12)
   {
      if(check(n,i)){
         cout<<i;
         return ;

      }
   }
   cout<<ans<<endl;
}
int main()
{   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    
    solve();
}
