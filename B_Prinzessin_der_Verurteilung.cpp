#include<bits/stdc++.h>
using namespace std;
#define   int       long long
#define   vi        vector<int>
#define   pii       pair<int,int>
#define   mii       map<int,int>
#define   si        set<int>
#define   fi        first
#define   sc        second
#define   int       long long
#define   w(t)      int t;cin>>t;while(t--)
#define   quick     ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   endl      "\n"
const int mod=1e9+7;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count[26]{0};
    for(int i=0;i<n;i++)
      count[s[i]-'a']=1;
    for(int i=0;i<26;i++)
    {
      if(count[i]==0)
      {
        cout<<(char)('a'+i)<<endl;
        return;
      }
    }
 
    set<string>st;
    for(int i=0;i<n-1;i++)
    {
      string temp="";
      temp+=s[i];
      temp+=s[i+1];
      st.insert(temp);
    }
    for(int i=0;i<26;i++)
    {
      for(int j=0;j<26;j++)
      {
        string temp="";
        temp+=(char)('a'+i);
        temp+=(char)('a'+j);
        if(st.find(temp)==st.end())
        {
          cout<<temp<<endl;
          return;
        }
      }
    }
 
      set<string>stt;
      for(int i=0;i<n-2;i++)
      {
        string temp="";
        temp+=s[i];
        temp+=s[i+1];
        temp+=s[i+2];
        stt.insert(temp);
      }
      
      for(int i=0;i<26;i++)
      {
        for(int j=0;j<26;j++)
        {
          {
              string temp="a";
              temp+=(char)('a'+i);
              temp+=(char)('a'+j);
              if(stt.find(temp)==stt.end())
              {
                cout<<temp<<endl;
                return;
              }
          }
        }
      }
}
int32_t main() {
    quick;
    w(t) {
        solve();
    }
    return 0;
}