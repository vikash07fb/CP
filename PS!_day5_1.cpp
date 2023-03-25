// Problem: B. Covered Path
// Contest: Codeforces - Codeforces Round #298 (Div. 2)
// URL: https://codeforces.com/contest/534/problem/B
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
	ll v1,v2,t,d;
	cin>>v1>>v2>>t>>d;

	ll dist=v1;
	for(int i=2;i<=t;i++){
		
		for(int j=d;j>=-d;j--){
			if(abs(v1+j-v2)<=(t-i)*d){
				v1+=j;
				dist+=v1;
		
				break;
			}
		}
	}
 	cout<<dist;
}