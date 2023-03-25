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
   ll ans=0;
   ll sum1=0,sum2=0;
   rep(i,0,n)
   {
    cin>>a[i];
    sum1+=a[i];

   }
   rep(i,0,n)
   {
    cin>>b[i];
    sum2+=b[i];
    
   }
   ll ind=n/4-1;
   if(sum1>sum2)
   {
    cout<<ans<<endl;
    return ;
   }
   rep(i,0,ind)
   {
        sum1-=a[i];
        sum2-=b[i];

   }
   while(sum1<=sum2)
   {
    // {   cout<<sum1<<" "<<sum2<<endl;
        n++;
       if(n%4==0)
       {
        sum1-=a[ind];
        sum2-=b[ind];
        ind++;
       }
       
       sum1+=100;
     
       ans++;
   }
   cout<<ans<<endl;
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