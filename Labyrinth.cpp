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
   ll n,m;
   cin>>n>>m;
   vector<string> graph;
   vvll dis(n,vll(m,1e9));
   vvll vis(n,vll(m,0));
   ll sr,sc,er,ec;


   vector<pair<ll,ll>> move={{1,1},{1,-1},{-1,1},{-1,-1}};
   rep(i,0,n)
   {
     string s;
     cin>>s;
     graph[i]=s;
   }

   queue<pair<ll,ll>> q;
   q.push({sr,sc});
   vis[sr][sc]=1;
   dis[sr][sc]=0;
   while(!q.empty())
   {
    auto it=q.front();
    ll x=it.F,y=it.S;
    q.pop();
    for(auto it1:move)
    {
        ll childX=it1.F+x;
        ll childY=it1.S+y;

        if(childX<0 || childX>=n || childY<0 || childY>=m)continue;
        if(graph[childX][childY]=='#')continue;
        if(vis[childX][childY])continue;

        vis[childX][childY]=1;
        dis[childX][childY]=dis[x][y]+1;
        q.push({childX,childY});
    }

    if(dis[er][ec]!=1e9)break;
   }



    if(dis[er][ec]!=1e9){

       Y
        cout<<dis[er][ec]<<endl;
    }else N
   
}
int main()
{   ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    solve();
    // ll t;
    // cin>>t;
    // while(t--)
    // {
    //     solve();
    // }
}

