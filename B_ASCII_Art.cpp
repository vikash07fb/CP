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
   ll h,w;
   cin>>h>>w;
   vvll v(h,vll(w));
   vector<string> s;
   rep(i,0,h)
   { string s1="";
    rep(j,0,w)
    {
       ll x;
       cin>>x;
       char c;
       c=x+64;
       if(x==0){
        s1+='.';
       }else s1+=c;
    }
    cout<<s1<<endl;
   }
}
int main()
{   ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    
    solve();
}
