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

int main(){
    ll t;cin>>t;
    while(t-->0)
    {
        string s1,s2;
        cin>>s1>>s2;
        ll n1=s1.length();ll n2=s2.length();
        reverse(s2.begin(), s2.end());ll ctr=0;
        cout<<s2<<endl;
        ll ptr=0;
        for(ll i=0;i<n1;i++)
        {
            for(ll j=ptr;j<n2;j++)
            {
                if(s1[i]==s2[j])
                {
                    cout<<s1[i]<<" ";
                    ctr++;
                    ptr=j+1;
                    break;
                }
            }
        }
        cout<<"\n"<<ctr*2<<endl;
    }
    return 0;
}
