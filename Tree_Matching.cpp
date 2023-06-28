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

vector<ll> graph[N];
 
vector<ll> vis(N);
ll ans=0;

void dfs(int vertex,int par)
{
    
    for(auto child:graph[vertex])
    {
       if(child==par)continue;
    //    if(vis[child])continue;
         dfs(child,vertex);
        //  cout<<child<<" "<<vertex<<endl;
        if(vis[vertex]==0 && vis[child]==0)
       {
         vis[vertex]=1;
         ans+=1;
       }

    }
    

}


void solve()
{  
    ll n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(1,-1);
    // cout<<endl;
    // for(int i=0;i<=n;i++)
    // {
    //     cout<<vis[i]<<" ";
    // }
    // cout<<endl;
    cout<<ans;

}
int main()
{   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
   
    solve();
    
}
