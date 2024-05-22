#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int maxn=100005; 


ll gcd(ll a,ll b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    ll n,ans;
    vector <ll> pre(n);
    vector <ll> a(n);
    vector <ll> suf(n);
	cin>>n;
	for(int i=1;i<=n;i++) 
    {
        cin>>a[i];
    }
    pre[1]=a[1]; suf[n]=a[n];
	for(int i=2;i<=n;i++)
    {
		pre[i]=gcd(pre[i-1],a[i]);
    }
	for(int i=n-1;i>=1;i--)
    {
		suf[i]=gcd(suf[i+1],a[i]);
    }
	for(int i=0;i<=n-1;i++)
	{
		if(i==0)
        {
			ans=suf[2];
        }
		else if(i==n-1)
        {
			ans=ans*pre[n-1]/gcd(pre[n-1],ans);
        }
		else
        {
			ans=ans*gcd(pre[i],suf[i+2])/gcd(gcd(pre[i],suf[i+2]),ans);
        }
	}
	cout<<ans;
	return 0;
}