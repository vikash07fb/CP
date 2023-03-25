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
  ll n,q;
  cin>>n>>q;
  vll v(n);
  rep(i,0,n)v[i]=i+1;
  ll pt1=0;
  multiset<ll> st;
  vll vis(n,0);
  vll called(n,0);
  rep(i,0,q)
  {
    ll x;
    cin>>x;
    if(x==2)
    {
        ll y;
        cin>>y;
        if(called[y-1]){
            st.erase(y);
        }
       
    }else {
        if(x==1){
          called[v[pt1]-1]++;
          st.insert(v[pt1]);
          pt1++;
        }
        if(x==3){
            auto it=st.begin();
            if(it!=st.end())
            {
                cout<<*it<<endl;
            }
        }
    }
  }
 

}
int main()
{   ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    
    solve();
}
