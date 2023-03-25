// Problem: C. Beautiful Sets of Points
// Contest: Codeforces - Codeforces Round #164 (Div. 2)
// URL: https://codeforces.com/contest/268/problem/C
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
	ll n,m;
	cin>>n>>m;
	
    ll max=min(m,n)+1;
	cout<<max<<endl;

	for(int i=0;i<max;i++){
		cout<<i<<" "<<max-i-1<<endl;
	}

   
}