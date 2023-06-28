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

// const int N=2e5+10;



void dfs(int ver,int p,vector<ll> graph[],vector<ll> &depth)
{
    if(graph[ver].size()==1 && ver!=1)
    {
        depth[ver]=1;
    }

    for(auto it:graph[ver])
    {
        if(it==p)continue;

        dfs(it,ver,graph,depth);
        depth[ver]+=depth[it];
    }
}


void solve()
{  
    ll n;
    cin>>n;
    vector<ll> graph[n+1];
 
    vector<ll> depth(n+1,0);

    for(int i=1;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(1,-1,graph,depth);
    ll q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int x,y;
        cin>>x>>y;

        cout<<depth[x]*depth[y]<<endl;
    }


}
int main()
{   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    
}
