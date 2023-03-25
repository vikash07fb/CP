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

//    if(n==1){
//     cout<<0<<endl;
//     return ;
//    }

//    if(n<=4){
//     cout<<1<<endl;
//     return ;
//    }
//    if(n<=9)
//    {
//     cout<<2<<endl;
//     return ;
//    }
//    ll i=n/8;

//    ll tp=8*(i+1)+1;

//    tp=tp/8;

//    cout<<2*tp<<endl;


 
        ll num = sqrt(n);
        if ((num * num) != n)
        {
            num++;
        }
 
        cout << num - 1 << endl;
  
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
