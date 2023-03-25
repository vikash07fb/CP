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
	if(m<=n){
	      cout<<n-m;
	}
	else{
	      ll count=0;
	      while(n!=m){
	            if(m>n){
      	            if(m%2!=0){
      	                  m+=1;
      	            }
      	            else{
      	                  m/=2;
      	            }
      	            count++;
	            }
	            else{
	                  count+=n-m;
	                  break;
	            }
	      }
	      cout<<count;
	}
}
int main()
{   
    solve();
    // ll t;
    // cin>>t;
    // while(t--)
    // {
    //     solve();
    // }
}