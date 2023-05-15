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
    vector<string> v(8);
    rep(i,0,8)
    {
        cin>>v[i];
    }
    ll i,j;
    bool fl=false;
    for(i=0;i<8;i++)
    {
        for(ll k=0;k<8;k++)
        {
            if(v[i][k]=='*')
            {
                j=k;
                fl=!fl;
                break;
            }

        }
        if(fl)break;
    }
    // cout<<i<<" "<<j<<endl;

    char c=97+j;

    cout<<c<<8-i;
}
int main()
{   ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    
    solve();
}
