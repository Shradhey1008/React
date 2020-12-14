// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{

	ll n,x,c=0,l=0,f=0;
        cin>>n>>x;
        double k=n,y=k;
        ll t[x];
        for(ll i=0;i<x;i++)
        cin>>t[i];
        for(int i=0;i<x;i++){
            c+=ceil(y);
            y=k/2;
            k/=2;
        }
        if(c!=n-1)
        cout<<-1<<"\n";
}
