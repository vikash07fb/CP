
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
 
int main()
{
 
	ll n;
	cin>>n;
	vll tp(n);
	
    vll v(4,0);
	rep(i,0,n){
      cin>>tp[i];
        v[tp[i]-1]+=1;
	}
    // for(auto it:v)cout<<it<<" ";
    // cout<<endl;
   ll ans=0;
   ans+=v[3];
   ans+=ceil((double)v[1]/2);
   ll tp1=min(v[0],v[2]);
   ans+=min(v[0],v[2]);
//    cout<<ans<<endl;
   
   v[0]-=tp1;
   v[2]-=tp1;
//    cout<<v[0]<<" "<<v[2]<<endl;
   if(v[2]!=0)ans+=v[2];
   if(v[0]!=0)ans+=v[0]/4;
   cout<<ans;
}