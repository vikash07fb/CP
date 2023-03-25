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

bool cmp(pair<ll,ll> a,pair<ll,ll> b)
{
    return a.S>b.S;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vll v(n);
        rep(i,0,n)cin>>v[i];
        vll ans(n);
        sort(all(v));
        if(n==2){
            cout<<v[0]<<" "<<v[1]<<endl;
            continue;
        }
        ll ht=INT_MAX;
        ll r;
        rep(i,1,n)
        {
            if(v[i]-v[i-1]<ht)
            {
                ht=v[i]-v[i-1];
            
                r=i;
            }
        }
       
       for(int i=r;i<n;i++)cout<<v[i]<<" ";
       for(int i=0;i<r;i++)cout<<v[i]<<" ";
       cout<<endl;
    }
}