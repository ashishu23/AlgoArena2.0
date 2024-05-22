#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long
using namespace std;

int main() {
    ll n,m,temp;
    cin>>n>>m;
    vector <ll> price(n);
    for(ll i=0;i<n;i++)
    {
        cin>>price[i];
    }
    map <ll,ll> freq_price;
    for(ll i=0;i<n;i++)
    {
        freq_price[ price[i] ]+=1;
    }
    for(ll i=0;i<m;i++)
    {
        cin>>temp;
        auto it=freq_price.upper_bound(temp);
        if(it!=freq_price.begin())
        {
            it=prev(it);
            cout<<it->first<<"\n";
            it->second-=1;
            if(it->second==0)
                freq_price.erase(it);
        }
        else
        {
            cout<<"-1\n";
        }
    }
    return 0;
} 