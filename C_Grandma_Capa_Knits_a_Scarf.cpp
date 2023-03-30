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
   ll n;
   cin>>n;
   string s;
   cin>>s;
   unordered_map<char,ll> mp;
   rep(i,0,n)mp[s[i]]++;

   ll ans=1e9;
   ll fl=0;
   rep(i,0,n/2)
   {
    if(s[i]!=s[n-i-1])
    {
        fl=1;
        break;
    }
   }
   if(!fl)
   {
    cout<<0<<endl;
    return ;
   }
   rep(i,0,26)
   {
       ll l=0,h=n-1;
       ll x=97+i;
       ll ct=0;
       char c=char(x);
    //    cout<<c<<endl;
       bool fl1=0;
       while(l<h)
       {
        if(s[l]==s[h])
        {
            l++;
            h--;
        }else 
        if(s[l]==c)
        {
            l++;
            ct++;
        }else 
        if(s[h]==c)
        {
            h--;
            ct++;
        }else {
            fl1=1;
            break;
        }
       }

       if(fl1==0)
       {
        ans=min(ct,ans);
       }

   }
   if(ans==1e9)cout<<-1<<endl;
   else cout<<ans<<endl;
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
