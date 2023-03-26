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

void dfs(int i,int j,vector<vector<char>>& v,int n,int m)
    {
        if(i<0 || j<0)return ;
        if(i>=n || j>=m)return ;
        
        if(v[i][j]=='0')return ;
        
        v[i][j]='0';
        
        dfs(i-1,j,v,n,m);
        dfs(i+1,j,v,n,m);
        dfs(i,j-1,v,n,m);
        dfs(i,j+1,v,n,m);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='0')continue;
                else {
                    ans++;
                    dfs(i,j,grid,n,m);
                }
                
                
            }
        }
        
        return ans;
    }

int main()
{
    ll n,m;

    cin>>n>>m;

   vector<vector<char>> v(n,vector<char>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
         char x;
         cin>>x;

         if(x=='#')v[i][j]='0';
         else v[i][j]='1';
        }
    }

    cout<<numIslands(v);
}
