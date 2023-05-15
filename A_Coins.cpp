#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define loop(n) for (long long i = 0; i < n; i++)
#define rloop(n) for (long long i = n - 1; i >= 0; i--)

ll m = 1e9 + 7;

signed main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {

        ll n, k;
        cin >> n >> k;

        ll a[n][n];
        loop(n)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

        if (n == 1)
        {
            cout << "YES\n";
            continue;
        }
        ll cnt = 0;
        loop(n / 2)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == a[n - i - 1][n - j - 1])
                    ;
                else
                    cnt++;
            }
        }
        if (n & 1)
        {
            for (int j = 0; j < n / 2; j++)
            {
                if (a[n / 2][j] == a[n / 2][n - j - 1])
                    ;
                else
                    cnt++;
            }
        }
        if (cnt > k)
            cout << "NO\n";
        else
        {
            k -= cnt;
            if (k % 2 == 0 || (n & 1))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}