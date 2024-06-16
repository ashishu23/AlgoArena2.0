#include <iostream>
#define ll long long
#include <set>
#include <vector>
using namespace std;

int main()
{
	int t;
    ll t1,t2,t3;
	cin>>t;
	while(t--)
    {
		ll n,x;
		cin>>n>>x;
		if(n==1 && x==1)
        {
			cout<<0;
			return 0;
		}
		set<ll> s;
        for(ll i=1;i<=pow(2,n)-1;i++)
        {
			if(i==x)
            {
				continue;
			}
			ll b=i^x;
			s.insert(min(i,b));
		}
		vector<ll> v;
		for(auto i:s)
        {
			v.push_back(i);
		}
		for(ll i=v.size()-1;i>0;i--)
        {
			v[i]^=v[i-1];
		}
		cout<<v.size()<<endl;
		for(auto i:v)
        {
			cout<<i<<" ";
		}
	}
}