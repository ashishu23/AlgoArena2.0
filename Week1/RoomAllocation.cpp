#include<iostream>
#include <vector>
#include <algorithm>
// #include <bits/stdc++.h>
using namespace std;
#define ll long long

bool compare(pair <ll,ll> p1,pair<ll,ll> p2)
{
    return p1.second<p2.second;
}

int main()
{
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL); 
    int n;
    cin>>n;
    vector < pair<ll,ll> > time (n);
    for (int i=0;i<n;i++)
    {
        cin>>time[i].first>>time[i].second;
    }
    sort(time.begin(),time.end(),compare);
    ll time_elapsed=0;
    ll rooms=1;
    for (int i=0;i<n;i++)
    {
        if(time[i].first<=time_elapsed)
        {
            rooms++;
        }
        time_elapsed=time[i].second;
    }
    cout<<rooms;
}