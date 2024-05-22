#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ll n,m,k;
    cin>>n>>m>>k;
    vector <ll> desired(n);
    vector <ll> size(m);
    for(ll i=0;i<n;i++)
    {
        cin>>desired[i];
    }
    for(ll i=0;i<m;i++)
    {
        cin>>size[i];
    }
    sort(desired.begin(),desired.end());
    sort(size.begin(),size.end());
    ll count=0;
    ll ptr1=0,ptr2=0;
    while(ptr1<n && ptr2<m)
    {
        if(abs(desired[ptr1]-size[ptr2])<=k)
        {
            ptr1++;
            ptr2++;
            count++;
        }
        else if(desired[ptr1]<size[ptr2])
        {
            ptr1++;
        }
        else
        {
            ptr2++;
        }
    }
    cout<<count;
    return 0;
}