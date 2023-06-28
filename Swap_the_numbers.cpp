#include <bits/stdc++.h>
using namespace std;

#define rep(i, x, y) for (int i = x; i < y; i++)
#define sz(v) int((v).size())
#define all(v) (v).begin(), (v).end()
#define gcd __gcd
#define endl "\n"
#define pb emplace_back
#define ll long long int
#define Y cout << "YES" << endl;
#define N cout << "NO" << endl;
#define F first
#define S second
const int mod=1e9+7;

typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;


void solve()
{ 
    ll n,k;
    cin>>n>>k;
    vll v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    ll l=k;
    ll r=n-1-k;
    vll x;
    vll x1;
    vll x2;
    vll ans;
    if(k>=n){
        ans=v;
    }
    else if(l>=r)
    {   for(int i=0;i<=r;i++){
        x1.push_back(v[i]);
    }
       for(int i=r+1;i<=l-1;i++)
       {
        x.push_back(v[i]);
       }
       for(int i=l;i<n;i++){
        x1.push_back(v[i]);
       }
        sort(x1.begin(),x1.end());
        
        int j=0;
        for(int i=0;i<=r;i++){
            ans.push_back(x1[i]);
            j=i;

        }
        for(auto i:x){
            ans.push_back(i);
        }
        for(int i=j+1;i<x1.size();i++){
            ans.push_back(x1[i]);
        }
     }
     else{
        ans=v;
        sort(ans.begin(),ans.end());
     }


    for(auto it:ans)cout<<it<<" ";
    cout<<endl;
}
int main()
{   ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
