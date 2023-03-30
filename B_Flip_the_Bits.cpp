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
   ll ans=0;
   string a,b;
   cin>>a>>b;
   if(a==b)
   {
    Y
    return ;
   }
   if(count(all(a),'0')!=count(all(b),'0') && count(all(a),'1')!=count(all(b),'1'))
   {
    N
    return ;
   }
   vll v(n,0);
   ll ct=0;
   if(a[0]=='1')ct++;
   else ct--;
   rep(i,1,n)
   {
    if(a[i]=='1')ct++;
    else ct--;

    if(ct==0)v[i]=1;

   }
//    for(auto it:v)cout<<it<<" ";
//    cout<<endl;
   bool fl=true;
   ll i=n-1;
   while(i>0)
   {
    if(fl)
    {   if(a[i]==b[i]){
        i--;
        continue;
    }
        if(a[i]!=b[i] && v[i]==0)
        {
            N
            return ;
        }else if(a[i]!=b[i] && v[i]){
            fl=!fl;
            i--;
        }
    }else  {
         if(a[i]!=b[i]){
        i--;
        continue;
    }

    if(a[i]==b[i] && v[i]==0)
    {
        N
        return ;
    }else if(a[i]==b[i] && v[i]){
            i--;
            fl=!fl;
        }
    }
 

  
   }

   Y
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
