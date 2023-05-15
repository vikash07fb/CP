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
   if(n%2==0)
   {
    cout<<-1<<endl;
    return ;
   }

   ll ct=0;
   vll ans;
   while(n>=3)
   { 
      ll tp=(n+1)/2;
      ll tp1=(n-1)/2;

      if(tp%2){
        ans.pb(1);
        ct++;
        n=tp;
      }
      if(tp1%2){
        ans.pb(2);
        ct++;
        n=tp1;
      }
      
   }

   cout<<ct<<endl;
//    cout<<2<<" ";
   for(int i=ans.size()-1;i>=0;i--)cout<<ans[i]<<" ";
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
