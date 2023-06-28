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

vector<int> depth(N);
vector<int> depth1(N);

void dfs(int node,int par)
{


    for(auto child:graph[node])
    {
        if(child==par)continue ;
        
        depth[child]=depth[node]+1;
        dfs(child,node);
    }
}


void dfs1(int node,int par)
{


    for(auto child:graph[node])
    {
        if(child==par)continue ;
        
        depth1[child]=depth1[node]+1;
        dfs1(child,node);
    }
}
void solve()
{ 
    int n;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    dfs(1,-1);

    int node;
    int ma=INT_MIN;

    for(int i=1;i<=n;i++)
    {
        if(ma<depth[i])
        {
            ma=depth[i];
            node=i;
        }
        depth[i]=0;
    }
    // cout<<node<<endl;
    dfs(node,-1);
    ma=INT_MIN;
    // int ans=INT_MIN;
    for(int i=1;i<=n;i++)
    {
          if(ma<depth[i])
        {
            ma=depth[i];
            node=i;
        }
        
    }
    // cout<<node<<endl;
    dfs1(node,-1);
    // for(int i=1;i<=n;i++)
    // {
    //     cout<<depth[i]<<" "<<depth1[i]<<endl;
    // }
    // cout<<endl;
    vll ans(n);

    for(int i=0;i<n;i++)
    {
        ans[i]=max(depth[i+1],depth1[i+1]);
    }

    for(auto it:ans)cout<<it<<" ";

}
int main()
{   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
        solve();
    
}
