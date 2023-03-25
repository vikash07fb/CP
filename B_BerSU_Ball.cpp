#include <bits/stdc++.h>
using namespace std;
#define rep(i, x, y) for (int i = x; i < y; i++)
#define sz(v) int((v).size())
#define all(v) (v).begin(), (v).end()
#define gcd __gcd
#define endl "\n"
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
    cin >> n;
    vll v1(n);
    rep(i, 0, n) cin >> v1[i];
    ll m;
    cin >> m;
    vll v2(m);
    rep(i, 0, m) cin >> v2[i];
    sort(all(v1));
    sort(all(v2));
    ll ans = 0;
    ll i = 0, j = 0;
    while (i < n && j < m)
    {
        if (v1[i] - v2[j] > 1)
        {
            j++;
            continue;
        }
        else if (v2[j] - v1[i] > 1)
        {
            i++;
            continue;
        }
        else if (v1[i] == v2[j])
        {
           i++;
           j++;
           ans++;
        }
        else if (abs(v1[i] - v2[j]) == 1)
        {
            i++;
            j++;
            ans++;
        }
    }

    cout << ans;
}