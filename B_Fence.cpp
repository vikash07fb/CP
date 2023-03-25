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
    ll n,k;
    cin>>n>>k;
    vll v(n);
    rep(i,0,n)cin>>v[i];
    ll i=0,j=0,sum=INT_MAX,ind=-1,mi=0;
    while(j<n)
    {
        mi+=v[j];
        if(j-i+1==k){
            if(mi<sum)
            {
                ind=i+1;
                sum=mi;
            }
            mi-=v[i];
            i++;
        }
        j++;
    }
    cout<<ind;
}