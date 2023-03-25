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
        ll ct=0;
        rep(i,0,n){
            cin>>v[i];
            if(v[i])ct++;
        }
      
        if(v[0]==1)
        {
            cout<<n+1<<" ";

            rep(i,0,n)cout<<i+1<<" ";

            cout<<endl;
            continue;
        }
        if(v[n-1]==0)
        {
            rep(i,0,n+1)cout<<i+1<<" ";
            cout<<endl;
            continue;
        }
          if(ct==0){
            cout<<-1<<endl;
            continue;
        }
        ll i;
        for( i=0;i<n;i++)
        {
            if(v[i]==1)break;
            else cout<<i+1<<" ";
        }
        cout<<n+1<<" ";
        for(int j=i;i<n;i++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}