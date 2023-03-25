// Problem: B. The Child and Set
// Contest: Codeforces - Codeforces Round #250 (Div. 2)
// URL: https://codeforces.com/contest/437/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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
  
	ll lm,sum;
	cin>>sum>>lm;
	ll i=1;
	vector<pair<ll,ll>> v;
	while(i<=lm){
	v.pb({log2(i & -i),i});
	i++;
	}

   sort(all(v));
   reverse(v.begin(),v.end());
   ll j=0;
   vll ans;
   while(sum>0 and j<v.size()){
   	 auto it=v[j];
     if(sum>=pow(2,it.F)){
     	     sum-=pow(2,it.F);
     	 	 ans.pb(it.S);
     }
   
  
   	 j++;
   }
    // for(auto it:v)cout<<pow(2,it.F)<<" "<<it.S<<" "<<endl;
   if(ans.size()>0 and sum==0){
   	cout<<ans.size()<<endl;
   	for(auto it:ans)cout<<it<<" ";
   }else cout<<-1;
    
}