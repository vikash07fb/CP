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

// ll gcd(int a, int b)
// {
//   if (a == 0)
//     return b;
//   return gcd(b % a, a);
// }
ll findGCD(vll arr, int n)
{
  ll result = arr[0];
  for (int i = 1; i < n; i++)
  {
    result =  __gcd(result,arr[i]);
 
    if(result == 1)
    {
    return 1;
    }
  }
  return result;
}

void solve()
{ 
    ll n;
    cin>>n;
    vll v(n);
    ll mi=INT_MAX;
    rep(i,0,n){
        cin>>v[i];
    
    }
    vll res;
    rep(i,0,n)
    {
           res.pb(abs(v[i]-(i+1))) ;
      
    }
  
    // rep(i,0,res.size())
    // {
    //     cout<<res[i]<<" ";

    // }

    ll ans=findGCD(res,res.size());
    cout<<ans;
    cout<<endl;
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
