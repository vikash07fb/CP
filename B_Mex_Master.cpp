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
   ll n;
   cin>>n;
   vll v(n);
   
   rep(i,0,n)
   {
    cin>>v[i];
   }
   vll ans;
//    vll vis(2e5+1);
   vll ele(n,0);
   sort(all(v));
   if(v[0]>=1)
   {
    cout<<0<<endl;
    return ;
   }
   ll l=0,h=n-1;
   while(l<h)
   {
     if(l>0 && v[l-1]==v[l]){
        l++;
        continue;
     }
    
    // if(vis[v[l]]==0 ){
          ans.pb(v[l]);
          ans.pb(v[h]);
        //   vis[v[l]]=1;
    
          ele[l]=1;
          ele[h]=1;
        
    // }
    
    l++;
    h--;
   }
//    rep(i,0,ans.size())cout<<ans[i]<<" ";
//    cout<<endl;
   for(int i=n-1;i>=0;i--)
   {
    if(ele[i]==0){
        ans.pb(v[i]);
    }
   }

//    rep(i,0,n)cout<<ans[i]<<" ";

//    cout<<endl;

   vll v1(n-1);
   rep(i,0,n-1)v1[i]=ans[i]+ans[i+1];



   sort(all(v1));
   ll ans1=0;
   bool fl=false;
   for(int i=0;i<n-1;i++){
    if(v1[i]==ans1){
        ans1++;
    }else {
        fl=true;
        break;
    }
   }
   cout<<ans1<<endl;
  
}
int main()
{   ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
