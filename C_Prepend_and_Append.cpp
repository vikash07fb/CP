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
        ll ans1=n;
        ll ans2=n;
        if(s[0]==s[n-1]){
            cout<<n<<endl;
            continue;
        }
        ll i=0,j=n-1;
        ll ans=n;
        while(i<=j)
        {
            if(s[i]==s[j]){
                break;
            }else {
                ans-=2;
                i++;
                j--;
            }
        }
        cout<<ans<<endl;
    }
}