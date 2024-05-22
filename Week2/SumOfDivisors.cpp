#include <iostream>
using namespace std;
#define ll long long

ll mod=1e9+7;



int main()
{
    ll n;
    cin>>n;
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=(sum + (i)*(n/i)%mod)%mod;
    }
    cout<<sum;
    return 0;
}