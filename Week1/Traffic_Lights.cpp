#include <iostream>
#include <set>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL); 
    long long x,n,p;
    cin>>x>>n;
    set < pair<long long,long long> > path;
    path.insert(make_pair(0,x));
    multiset <long long> range;
    range.insert(x);
    for(long long i=0;i<n;i++)
    {
        cin>>p;
        auto it=path.upper_bound(make_pair(p,0));
        if(it!=path.begin())
            it--;
        long long start = it->first;
        long long end = it->second;
        path.erase(it);
        path.insert(make_pair(start,p));
        path.insert(make_pair(p,end));
        range.erase(range.find(end-start));
        range.insert(p-start);
        range.insert(end-p);
        cout<<*(range.rbegin())<<" ";
    }
}

