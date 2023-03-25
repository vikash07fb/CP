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
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vll v(n);
        ll o=0,e=0;
        rep(i,0,n)
        {
            cin>>v[i];
            if(v[i]%2)o++;
            else e++;
        }
        // cout<<o<<" "<<e<<endl;
        bool fl=false;
        for(int i=1;i<=o;i+=2)
        {
            if(e>=k-i && k-i>=0)
            {
                fl=!fl;
                break;
            }
        }
        if(fl)Y
        else N
    }
}