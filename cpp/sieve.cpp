#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
#define ll long long int
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define debug1(x) cout<<#x<<" "<<x<<endl;
#define debug2(x,y) cout<<#x<<" "<<x<<"   "<<#y<<" "<<y<<endl;
#define debug3(x,y,z) cout<<#x<<" "<<x<<"   "<<#y<<" "<<y<<"   "<<#z<<" "<<z<<endl;
#define present(c,x) ((c).find(x) != (c).end())
#define null NULL
#define mp make_pair
#define sz(x)	(ll)x.size()
#define fi first
#define se second
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define inf 1e18
#define flush fflush(stdout);
//#define endl '\n'
//unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
//shuffle (foo.begin(), foo.end(), std::default_random_engine(seed));
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<ll, null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
typedef pair<int, int>		pii;
ll modpower(ll a,ll b,ll c)
{
	ll res=1;
	while(b)
	{
		if(b&1LL)
			res=(res*a)%c;
		a=(a*a)%c;
		b>>=1;
	}
	return res;
}
//-------------------------------Template--Above-----------------------------------------------
int main()
{
	boost
	ll t;
	cin>>t;
	while(t--){
        ll n,x;
        cin>>n>>x;
        ll arr[n];
        ll k=30;
        vector<vector<ll> >v(k+1);
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        if(i==n-1)continue;
        for(ll j=k;j>=0;j--)
            if(arr[i]&(1<<j))
                v[j].pb(i);
        }
        vector<ll>v2(k+1,0);
        for(ll i=0;i<n-1;i++){
            for(ll j=k;j>=0;j--){
                ll q=1<<j;
                if((arr[i]&q)==0)
                    continue;
                arr[i]^=q;
                ll z;
                if(++v2[j]<v[j].size())
                    z=v[j][v2[j]++];
                else
                    z=n-1;
                arr[z]^=q;
                if(--x==0)break;
            }
            if(x==0)break;
        }
        if(x%2==1 and n==2){
            arr[n-2]=arr[n-2]^1;
            arr[n-1]=arr[n-1]^1;
        }
        for(ll i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
	return 0;
}
