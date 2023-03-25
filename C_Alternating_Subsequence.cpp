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
        ll n;
        cin>>n;
        vll v(n);
        rep(i,0,n)cin>>v[i];
        ll ans=0;
        priority_queue<ll> pq;
        ll i=0,j=0;
        while(j<n)
        {
            if(v[i]>0 && v[j]>0)
            {
                pq.push(v[j]);
                j++;
            }else if(v[i]<0 && v[j]<0)
            {
                pq.push(v[j]);
                j++;
            }else {
                ans+=pq.top();
                while(!pq.empty())pq.pop();
                i=j;
              

            }
        }
        ans+=pq.top();
        cout<<ans<<endl;
    }
}