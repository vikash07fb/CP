#include <bits/stdc++.h>
using namespace std;
#define  rep(i,x,y)   for(int i=x ; i<y ; i++)
#define  sz(v)    int((v).size())
#define  all(v)  (v).begin(), (v).end()
#define  gcd  __gcd
#define  endl "\n"
#define pb push_back
#define ll long long int
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
#define F first 
#define S second
 
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;



 vector<ll>dp(4001,-1);
 ll fn(ll n,vll &v,ll &ct){
    if(n==0)return 0;

    if(dp[n]!=-1)
    return dp[n];
    
    ll ans=INT_MIN;
    for(int i=0;i<3;i++)
    {
        if(n-v[i]>=0)
        {     
            ans=max(ans,1+fn(n-v[i],v,ct));
              
        }
    }
    return dp[n]=ans;
   
 }

int main()
{
	ll n;
	cin>>n;
	vll v(3);
    rep(i,0,3)cin>>v[i];
    ll ct=0;
    cout<<fn(n,v,ct);
	
    

   
}
