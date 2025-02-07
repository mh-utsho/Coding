#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//Speed
#define Hello_2025 ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
// Define Ordered Set
template <typename T>
using  ordered_set= tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;

//Aliases
using ll= long long;
//Constants
const ll INF= LLONG_MAX;
const ll mod=1e9+7;
const ll AR=2e5+10;

//TypeDEf
typedef vector<ll> vll;
typedef vector<string> vs;
typedef map<ll,ll> mpll;

// Macros
#define F                   first
#define S                   second
#define pb                  push_back
#define endl                "\n"
#define sz(x)               (int)size(x)
#define MID(left, right)   ((left) + ((right) - (left)) / 2)
// const int dx[] = {0,1,1, 1, 0,-1,-1,-1}; // const int dx[] = {0,1,0,-1};
// const int dy[] = {1,1,0,-1,-1,-1, 0, 1}; // const int dy[] = {1,0,-1,0};
//-----------
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(),x.rend()
#define fr(i, s, e)         for (ll i = (s); i < (e); i++)
#define rfr(i, s, e)        for (ll i = (s); i >= (e); i--)
#define loop(e)             for (ll i = 1 ; i <= (e); i++)
#define DBG(a)              cerr<< "Line "<<__LINE__ <<" : "<< #a <<" = "<<(a)<<endl
//------------
#define print(x)            for(auto el:x) cout<<el<<" ";NL
#define yes                 cout<<"YES"<<endl
#define no                  cout<<"NO"<<endl
#define NL                  cout<<"\n"

// overloading
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}


//__x__x__x__x__x__x__x__x__x__x__x__x__x__x__x__x__x__x__x__x__x__x__x__

// string DtoB(ll n) {if(n==0)return "0";string s="";while(n>0){s+=(n%2==0?"0":"1");n/=2;}reverse(all(s));return s;}
// ll power(ll a,ll b){ll an=1;while(b){if(b&1) an*=a;a*=a;b>>=1;}return an;}
// bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}

//__x__x__x__x__x__x__x__x__x__x__x__x__x__x__x__x__x__x__x__x__x__x__x__

//----------------Code----------------------------------
void solve(){
   ll a,b,c,d,k=0,m,n,ans=0;
   string s,t; 
   cin>>n;
   vll v(n+2);

   fr(i,1,n+1) cin>>v[i];
   
   vll AN(n+5,0);
    AN[n+2]=10e15;
    rfr(i,n,1){
      ll x=i+v[i]+1;
      if(x>n+1) {
        x=n+2;
      }
      AN[i]=min(1+AN[i+1],AN[x]);
    }
    
   cout<<AN[1]<<endl;
   
}
 
//----------------main---------------------------------
int main(){
    Hello_2025
    int T=1;
    cin>>T;
    while(T--) 
    solve();
    return 0;
}