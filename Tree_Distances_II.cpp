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

const int N=2000001;

vector<ll> graph[N];
vector<ll> subSize(N);
vector<ll> subDist(N);
vector<ll> res(N);

// vector<int> depth(N);
// vector<int> depth1(N);
void dfs1(int node , int par)
{
	subSize[node] = 1;
	
	for(int child : graph[node])
	if(child != par)
	{
		dfs1(child , node);
		subSize[node] += subSize[child];
		
		subDist[node] += subSize[child] + subDist[child];
	}
}
 
void dfs(int node , int par, int n)
{
	res[node] = res[par] - subSize[node] - subDist[node] + n - subSize[node] + subDist[node];
	
	for(int child : graph[node])
	if(child != par)
	dfs(child , node ,n);
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
    dfs1(1,-1);

    res[1] = subDist[1];
	
	for(int child : graph[1])
	dfs(child , 1,n);

    
    for(int i=1;i<=n;i++)
    {
        cout<<res[i]<<" ";
    }

}
int main()
{   ios_base::sync_with_stdio(false);
	cin.tie(NULL);
        solve();
    
}
