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
   string s;
   cin>>s;
   string ans="";
   ll n=s.length();
   rep(i,0,n)
   { 
      //  if(i==n-1 && s[i]=='9'){
   //      ans+=s[i];
   //      continue;
   // }
   if(i==0 && s[i]=='9'){
        ans+=s[i];
        continue;
   }
      int  tp=(int)s[i]-'0';
      int  tp1=9-tp;
      if(tp<tp1){
         ans+=s[i];
      }else {
      
        int x=(int)s[i]-'0';
        int y=9-x;
        y+=(int)'0';

        // cout<<y<<endl;
        ans+=char(y);
      }
   }
    cout<<ans;
}