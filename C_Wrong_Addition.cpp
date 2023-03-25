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
    ll a, s;
    cin >> a >> s;
    vector<int>b;
    while(s){
        int x = a % 10;
        int y = s % 10;
        if(x <= y) b.emplace_back(y - x);
        else{
            s /= 10;
            y += 10 * (s % 10);
            if(x < y && y >= 10 && y <= 18) b.emplace_back(y - x);
            else{
                cout << -1 << '\n';
                return;
            }
        }
        a /= 10;
        s /= 10;
    }
    if(a) cout << -1 << '\n';
    else{
        while (b.back() == 0) b.pop_back();
        for(int i = b.size() - 1; i >= 0; i--) cout << b[i];
        cout << '\n';
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}