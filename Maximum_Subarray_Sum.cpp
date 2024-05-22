#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL); 
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long max_sum=-1e9;
    long long maxm=0;
    for(int i=0;i<n;i++)
    {
        maxm+=arr[i];
        max_sum=max(max_sum,maxm);
        if(maxm<0)
        {
            maxm=0;
        }
    }
    cout<<max_sum;
}