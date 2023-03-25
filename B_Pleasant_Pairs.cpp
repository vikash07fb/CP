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
{  ll t;
   cin>>t;
   while(t--){
    int n;
        cin >> n;
        ll a[n+1];
 
        for (int i = 1; i < n+1; i++)
        {
            cin>>a[i];
        }
        
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = a[i] - i; j <= n; j += a[i])
            {
                if (j >= 0)
                    if (a[i] * a[j] == i + j && i < j)
                        ans++;
            }
        }
        cout << ans << endl;
    }
   }
