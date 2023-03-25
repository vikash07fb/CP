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
            if(v[i]<=0)ct++;
        }
        if(ct%2==0)
        {
            ll sum=0;
            rep(i,0,n)
            {
                if(v[i]<0)
                {
                    v[i]*=-1;
                    sum+=v[i];
                }
                else sum+=v[i];
            }

            cout<<sum<<endl;
        }else {
         

           ll sum=0;
            rep(i,0,n)
            {
                if(v[i]<0)
                {
                    v[i]*=-1;
                    sum+=v[i];
                }
                else sum+=v[i];
            }
                 sort(all(v));
              cout<<sum-2*v[0]<<endl;
        }

    }
}