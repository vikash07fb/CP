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
    ll n,k,x;
    cin>>n>>k>>x;
    ll ans=0;
    vll v(n);
    rep(i,0,n)cin>>v[i];
    sort(all(v));
    vll tp;
    rep(i,1,n)
    {
        if(v[i]-v[i-1]>x){
            ans++;
            tp.pb(v[i]-v[i-1]);
        }

    }
    sort(all(tp));
    ans++;
    if(k==0)
    {
        cout<<ans<<endl;
        return 0;
    }
    // cout<<tp[0]<<endl;
    // for(auto it:tp)cout<<it<<" ";
    
    cout<<endl;
   
    ll j=0;
    while(j<tp.size() && k)
    {   ll ct=((tp[j]+x-1)/x)-1;

        // cout<<ct<<endl;
        k-=ct;
       
        if(k>=0)ans-=1;

         j++;
    }
    cout<<ans;

}