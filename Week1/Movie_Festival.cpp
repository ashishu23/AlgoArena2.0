#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
#define ll long long
using namespace std;

bool compare(pair<ll,ll> p1,pair<ll,ll> p2)
{
    return p1.second<p2.second;
}

int main()
{
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL); 
    ll n;
    cin>>n;
    vector < pair<ll,ll> > time(n);
    for(ll i=0;i<n;i++)
    {
        cin>>time[i].first>>time[i].second;
    }
    sort(time.begin(),time.end(),compare);
    ll time_done=0;
    ll maxm=0;
    for(ll i=0;i<n;i++)
    {
        if(time[i].first>=time_done)
        {
            maxm++;
            time_done=time[i].second;
        }
    }
    cout<<maxm;
}

