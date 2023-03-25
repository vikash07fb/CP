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
        string s,s1,s2;
        cin>>s;
        s1=s;
        s2=s;
        for(int i=0;i<10;i++)
        {
            if(i%2 && s[i]=='?')s1[i]='1';
            else if(i%2==0 && s[i]=='?')s1[i]='0';
        }
        for(int i=0;i<10;i++)
        {
            if(i%2==0 && s[i]=='?')s2[i]='1';
            else if(i%2 && s[i]=='?')s2[i]='0';
        }

        ll i=0;
        ll a=0,b=0;
        while(i<10){
           if(i%2 && s1[i]=='1')b++;
           else if(s1[i]=='1')a++;

           if(i>5 && a>b)break;
           if(i>5 && b>a)break;

           i++;
        }

        ll j=0;
        ll a1=0,b1=0;
        while(j<10){
           if(j%2 && s2[j]=='1')b1++;
           else if(s2[j]=='1')a1++;

           if(j>5 && a1>b1)break;
           if(j>5 && b1>a1)break;

           j++;
        }
        cout<<min(i,j);
        cout<<endl;
    }
}