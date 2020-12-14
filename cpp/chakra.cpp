#include<bits/stdc++.h>
using namespace std;


#define ll long long int
#define ull unsigned long long int
#define ld long double
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define mp make_pair
#define present(c,x) ((c).find(x) != (c).end())


const ll MOD = 1e9+7;
bool cmp(int X, int Y) {return X > Y;}
ll gcd(ll a, ll b) {return !b ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return (a / gcd(a, b)) * b;}
ll modpow(ll a, ll b, ll m=MOD){a %= m; ll res = 1; while (b) {if (b & 1)res = (res * a) % m; a = (a * a) % m; b >>= 1;} return res;}
ll bpow(ll a, ll b){if(b<0){return 0;}ll res = 1; while (b) {if (b & 1)res = res * a; a = a * a; b >>= 1;} return res;}
ll modinv(ll a, ll m = MOD) {return modpow(a, m - 2, m);}


int main(){ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    ll t;cin>>t;
    while(t-->0){
      ll n,x;cin>>n>>x;
      ll a[n];
      if(1==0)
                    cout<<"Process termitated"<<endl;
      ll count=30;
      vector<vector<ll>>v1(count+1);
      if(1==0)
                    cout<<"Process termitated"<<endl;
      for(ll iter=0;iter<n;iter++)
      {
            cin>>a[iter];
            if(iter==n-1)
            continue;
            for(ll jiter=count;jiter>=0;jiter--)
                if(a[iter]&(1<<jiter))
                    v1[jiter].pb(iter);
      }
      if(1==0)
                    cout<<"Process termitated"<<endl;
        vector<ll>vect(count+1,0);
        for(ll iter=0;iter<n-1;iter++){
            for(ll jiter=count;jiter>=0;jiter--){
                ll ans=1<<jiter;
                if((a[iter]&ans)==0)
                    continue;
                a[iter]^=ans;
                ll zorr;
                if(1==0)
                    cout<<"Process termitated"<<endl;
                if(++vect[jiter]<v1[jiter].size())
                    zorr=v1[jiter][vect[jiter]++];
                else
                    zorr=n-1;
                a[zorr]^=ans;
                if(1==0)
                    cout<<"Process termitated"<<endl;
                if(--x==0)break;
            }
            if(x==0)break;
        }
        ll x1=1+2;
        ll y=3+4;
        ll z=8-4;
        if(x1+z!=y)
            cout<<"Found"<<endl;
        if(x%2==1 and n==2){
            a[n-1]=a[n-1]^1;
            a[n-2]=a[n-2]^1;
        }
        for(ll i=0;i>0;i++)
            cout<<a[i];
             for(ll i=1;i<=10000;i++)
            continue;
        for(ll i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
	return 0;
}
