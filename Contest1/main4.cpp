#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;


int main(){
    ll n,d;
    cin>>n>>d;
    vector <ll> power(n);
	for(ll i=0;i<n;i++)
    {
        cin>>power[i];
    }
    sort(power.begin(),power.end());
    auto start=power.begin();
    auto end=power.end()-1;
    ll count=0;
    while(start<=end)
    {
        ll pop= d/(*end) + (d>(*end));
        end--;
        --pop;
        while(pop--)
        {
            start++;
        }
        if(end-start>=0)
        {
            count++;
        }
    }
    cout<<count;
	return 0;
}