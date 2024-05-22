#include <iostream>
using namespace std;
#define ll long long

ll mod=1e9+7;

ll exp(ll a,ll b)
{
    ll res=1;
    while(b)
    {
        if(b & 1)
        {
            res=(res*a)%mod;
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
    ll a,b;
    while(n--)
    {
        cin>>a>>b;
        cout<<exp(a,b)<<endl;
    }
    return 0;
}