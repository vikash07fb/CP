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
   ll n,q,k;
   cin>>n>>q>>k;
   vll v(n);
   rep(i,0,n)cin>>v[i];

   vll v1(n);
   rep(i,0,n)
   {
    if(i==0){
        v1[i]=v[i+1]-2;
    }else if(i==n-1)
    {
        v1[i]=k-v[i-1]-1;
    }else {
        v1[i]=v[i+1]-2;
    }
   }

   rep(i,1,n)v1[i]+=v1[i-1];

   for(auto it:v1)cout<<it<<" ";
   cout<<endl;
   while(q--)
   {
    ll x,y;
    cin>>x>>y;
    if(abs(y-x)==0){
        cout<<k-1<<endl;
        continue;
    }
    ll ct=0;
    // for(int i=x;i<=y;i++)
    // {    
    //     // cout<<i<<endl;

    //     if(i==x)
    //     {
    //         ct+=v[i]-2;
    //         // cout<<ct<<" "<<endl;
    //     }else if(i==y)
    //     {
    //         ct+=k-v[i-2]-1;
    //         // cout<<ct<<" "<<endl;
    //     }else {
    //         ct+=v[i]-v[i-2]-2;
    //         // cout<<ct<<" "<<endl;
    //     }

    // }
    
    ct+=v1[y-1];
    // if(x>1)ct-=v1[x-2];
    
    if(y<n)ct+=k-v[y]+1;

    cout<<ct<<endl;
   }


}
int main()
{   ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    
    solve();
}
