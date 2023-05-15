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
const int mod = 1e9 + 7;

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
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> v;
    vvll v1;
    ll cnt=0;
    rep(i, 0, n)
    {
        vll tp(n);

        rep(j, 0, n)
        {
            ll x;
            cin >> x;
            tp[j] = x;
        }

        v.pb(tp);
    }

    ll i = 0, j = n - 1;
    while (i <= j)
    {

        ll l = 0, r = n - 1;
        if (i == j)
        {
            for (int a = 0; a < n / 2; a++)
            {

                if (v[i][l] != v[j][r])
                {
                    // cout<<i<<l<<" "<<j<<r<<endl;
                   cnt++;
                }
                l++;
                r--;
            }
        }
        else
        {
            for (int a = 0; a < n; a++)
            {

                if (v[i][l] != v[j][r])
                {
                    // cout<<i<<l<<" "<<j<<r<<endl;
                   cnt++;
                }
                l++;
                r--;
            }
        }

        // cout<<i<<" "<<j<<endl;
        i++;
        j--;
    }
    if (cnt > k)
           N
        else
        {
            k -= cnt;
            if (k % 2 == 0 || (n & 1))
               Y
            else
               N
        }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
