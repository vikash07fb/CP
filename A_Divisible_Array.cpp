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
   if(n%2)
   {
    rep(i,0,n)cout<<i+1<<" ";

    cout<<endl;

    return ;
   }else {
    ll sum=0;
    vll v(n);
    rep(i,0,n){
        v[i]=i+1;
        sum+=v[i];
    }
    ll tp=sum/n;
    ll sum1= n*(tp+1);
    ll dif = sum1-sum;
    
    v[0]+=dif;
    rep(i,0,n)cout<<v[i]<<" ";
    cout<<endl;
    return ;

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