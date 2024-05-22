#include <iostream>
#include <vector>
using namespace std;
#define ll long long

ll MOD =1e9+7;

ll expo(ll base, ll pow) {
	ll ans = 1;
	while (pow) {
		if (pow & 1) ans = ans * base % MOD;
		base = base * base % MOD;
		pow >>= 1;
	}
	return ans;
}

int main()
{
    int n;
    cin>>n;
    vector < pair <ll,ll> > PrimeFactors(n);
    ll div_cnt=1;
    ll div_cnt2=1;
    ll div_sum=1;
    ll div_prod=1;
    for(int i=0;i<n;i++)
    {
        cin>>PrimeFactors[i].first>>PrimeFactors[i].second;
        div_cnt = div_cnt * (PrimeFactors[i].second + 1) % MOD;
        div_sum=div_sum * (expo(PrimeFactors[i].first,PrimeFactors[i].second+1)-1)%MOD  * expo(PrimeFactors[i].first-1,MOD-2)%MOD;
		div_prod = expo(div_prod, PrimeFactors[i].second + 1) *
		           expo(expo(PrimeFactors[i].first, (PrimeFactors[i].second * (PrimeFactors[i].second + 1) / 2)), div_cnt2) % MOD;
		div_cnt2 = div_cnt2 * (PrimeFactors[i].second + 1) % (MOD - 1);
    }
    cout<<div_cnt<<" "<<div_sum<<" "<<div_prod;
    return 0;
}