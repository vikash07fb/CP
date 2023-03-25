// Problem: C. Team
// Contest: Codeforces - Codeforces Round #235 (Div. 2)
// URL: https://codeforces.com/contest/401/problem/C
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
	if(n>m+1){
		cout<<-1<<endl;
	    return 0;
	}
	if(m>2*n+2){
		cout<<-1;return 0;
	}
	while(n>m){
		cout<<0;
		n--;
	}
	while(n>0 && m>0){
		if(m>n){
			cout<<110;
			m-=2;
			n-=1;
		}else {
			cout<<10;
			m--;n--;
		}
	}
	for(int i=0;i<m;i++){
		cout<<1;
	}
}