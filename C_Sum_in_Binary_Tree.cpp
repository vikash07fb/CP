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
#define No cout << "NO" << endl;
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

const int N=2e5+10;

vector<int> graph[N];

// vector<int> depth(N);

void dfs(int node,int par)
{


    for(auto child:graph[node])
    {
        if(child==par)continue ;
        
        
        dfs(child,node);
    }
}
void solve()
{ 
    ll n;
    cin>>n;
    // for(int i=1;i<n;i++)
    // {
    //     int x,y;
    //     cin>>x>>y;
    //     graph[x].push_back(y);
    //     graph[y].push_back(x);
    // }
    ll ans=0;

    while(n>=1)
    {
        ans+=n;
        n=n/2;
    }
  
    cout<<ans<<endl;
}
int main()
{   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
      ll t;
      cin>>t;
      while (t--)
      {
        /* code */
        solve();
      }
      
    
}
