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
    int n;
    cin>>n;
    // cout<<n<<endl;
    stack<string>  st;

    ll j=0;
    while(j<n)
    {   string s;
        cin>>s;
        st.push(s);
        j++;
    }

    map<string,int> mp;

    ll k=st.size();

    for(int i=0;i<k;i++)
    {
        string tp=st.top();
        st.pop();

        if(mp.find(tp)==mp.end()){

            ll a=tp.size();
            mp[tp]++;
            cout<<tp[a-2]<<tp[a-1];
        }else continue;
    }
  
}
int main()
{   ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    solve();
}
