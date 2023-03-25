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
   vll ev;
   vll od;
    ll o=0,e=0;
   rep(i,0,n)
   {
    ll x;
    cin>>x;
    if(x%2){
        od.pb(x);
        o+=x;
    }
    else {
        ev.pb(x);
        e+=x;
    }
   }
//    while(od.back()==0)od.pop_back();
//    while(ev.back()==0)ev.pop_back();
   sort(all(od),greater<int>());
   sort(all(ev),greater<int>());

    if(o==0){
        cout<<"Alice"<<endl;
        return ;
    }
    if(e==0)
    {
        cout<<"Tie"<<endl;
        return ;
    }

    if(od.size()==ev.size())
    {
        if(e>o)
        {
            cout<<"Alice"<<endl;
            return ;
        }else {
            cout<<"Tie"<<endl;
            return ;
        }
    }

    if(e>o)
    {
        cout<<"Alice"<<endl;
        return ;
    }else 
    {
        if(od.size()==ev.size()+1)
        {
            cout<<"Tie"<<endl;
            return;
        }

        cout<<"Bob"<<endl;
        return ;
    }


  
//    ll i=0;
//    ll j=0;
//    ll alice=0;
//    ll bob=0;
//    ll ct=0;
//    bool fl=false;
//    while(ct<n)
//    {
//         if(!fl)
//         {
//             if(i<ev.size())alice+=ev[i];
//             i++;
//             fl=!fl;
//         }else {
//             if(j<od.size())bob+=od[j];
//             j++;
//             fl=!fl;
//         }
//         ct++;
//    }
//    if(alice>bob)cout<<"Alice";
//    else if(bob>alice)cout<<"Bob";
//    else cout<<"Tie";

   cout<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}