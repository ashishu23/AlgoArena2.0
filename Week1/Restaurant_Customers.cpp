#include <iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
#define ll long long
using namespace std;

bool compare1(pair<ll,ll> p1,pair<ll,ll> p2)
{
    return p1.first<p2.first;
}
bool compare2(pair<ll,ll> p1,pair<ll,ll> p2)
{
    return p1.second<p2.second;
}

int main()
{
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL); 
    ll n;
    cin>>n;
    vector < pair<ll,ll> > arr(n);
    vector < pair<ll,ll> > dep(n);
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i].first>>arr[i].second;
        dep[i].first=arr[i].first;
        dep[i].second=arr[i].second;
    }
    sort(arr.begin(),arr.end(),compare1);
    sort(dep.begin(),dep.end(),compare2);
    ll ptr1=0,ptr2=0,current=0,maxm=0;
    while(ptr1<n && ptr2<n)
    {
        if(arr[ptr1].first<dep[ptr2].second)
        {
            current++;
            ptr1++;
            maxm=max(maxm,current);
        }
        else
        {
            ptr2++;
            current--;
        }
    }
    cout<<maxm;
}

