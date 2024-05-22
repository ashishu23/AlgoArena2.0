#include <iostream>
using namespace std;
#define ll long long


ll exp(ll a,ll b,ll mod)
{
    if(a==0 && b!=0)
    {
        return 0;
    }
    ll res=1;
    while(b)
    {
        if(b & 1)
        {
            res=(res%mod*a%mod)%mod;
        }
        a=(a%mod*a%mod)%mod;
        b=b/2;
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    ll a,b,c;
    ll mod=1e9+7;
    while(n--)
    {
        cin>>a>>b>>c;
        ll temp=exp(b,c,mod-1);
        cout<<exp(a,temp,mod)<<endl;
    }
    return 0;
}