#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	ll t;
	cin>>t;
	while(t--){
	    
	    ll n;
	    cin>>n;
	   
	   // char a[n];
	    string x;
	    
	    ll a=0;
	    ll b=0;
	    ll ab=0;
	    ll o=0;
	    ll ans=0;
	    
	    for(ll i=0; i<n; i++){
	        cin>>x;
	        if(x=="A"){
	            a++;
	        }
	        else if(x=="B"){
	            b++;
	        }
	        else if(x=="AB"){
	            ab++;
	            ans++;
	        }
	        else{
	            o++;
	            ans++;
	        }
	    }
	  
	  if(a>b){
	      ans+=a;
	  }
	  else{
	      ans+=b;
	  }
	   // string ans="";
	   
	   /*Logic*/
	   
	   
	    cout<<ans<<"\n";
	}
	return 0;
}