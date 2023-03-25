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
        string s;
        cin>>s;
        ll x=0,y=0;
        bool fl=true;
        rep(i,0,n)
        {
            if(s[i]=='L')
            {
                x-=1;
            }else if(s[i]=='R')
            {
                x+=1;
            }else if(s[i]=='U')
            {
                y+=1;
            }else {
                y-=1;
            }

            if(x==1 && y==1){
                Y
               
                fl=!fl;
                 break;
            }
        }
        if(fl)N
    }
}