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
        vll v;
        ll st = 1;
        ll end = n * n;
        vector<vector<ll>> ans(n,vector<ll>(n,0));
        while (st <= end)
        {   if(st==end){
            v.pb(st);
            break;
        }
            v.pb(st);
            v.pb(end);
            st++;
            end--;
        }
        
        ll ind = 0;
        // for(auto it:v)cout<<it<<" ";
        // cout<<endl;
    

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                for (int j = 0; j < n; j++)
                {
                    ans[i][j]=v[ind];
                    ind++;
                }
            }
            else
            {
                for (int j = n - 1; j >= 0; j--)
                {
                    ans[i][j]=v[ind];
                    ind++;
                }
            }
        }
     
        for (auto it : ans)
        {
            for (auto it1 : it)
                cout << it1 << " ";
            cout << endl;
        }
    }
}