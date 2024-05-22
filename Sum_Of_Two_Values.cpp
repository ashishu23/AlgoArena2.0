#include <iostream>
#include <map>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL); 
    long long n,x;
    cin>>n>>x;
    map < long long,long long > mp;
    vector <int> arr(n);
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool flag=true;
    for(long long i=0;i<n;i++)
    {
        if(flag)
        {
            if(mp.find(x-arr[i])!=mp.end())
            {
                cout<<(*mp.find(x-arr[i])).second<<" "<<i+1;
                flag=false;
            }
            mp.insert(make_pair(arr[i],i+1));
        }
    }
    if(flag)
    {
        cout<<"IMPOSSIBLE";
    }

}
