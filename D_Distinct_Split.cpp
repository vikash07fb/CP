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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        map<char, ll> mp1, mp2;
        vll v1(n, 0), v2(n, 0);
        v1[0] = 1;
        mp1[s[0]]++;
        for (ll i = 1; i < n; i++)
        {
            if (mp1.find(s[i]) == mp1.end())
            {
                v1[i] = 1 + v1[i - 1];
            }
            else
            {
                v1[i] = v1[i - 1];
            }
            mp1[s[i]]++;
        }
        v2[n - 1] = 1;
        mp2[s[n - 1]]++;
        for (ll i = n - 2; i >= 0; i--)
        {
            if (mp2.find(s[i]) == mp2.end())
            {
                v2[i] = 1 + v2[i + 1];
            }
            else
            {
                v2[i] = v2[i + 1];
            }
            mp2[s[i]]++;
        }
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ans = max(ans, v1[i] + v2[i]);
        }
        if (ans > n)
            ans = n;
        cout << ans << endl;
    }
}