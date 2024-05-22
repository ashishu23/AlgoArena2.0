#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false); 
    // cin.tie(NULL); 
    long long n;
    cin>>n;
    vector <long long> arr(n);
    for(long long i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    long long med=arr[n/2];
    long long cost=0;
    for(long long i=0;i<n;i++)
    {
        if(arr[i]<med)
        {
            cost+=med-arr[i];
        }
        else
        {
            cost+=arr[i]-med;
        }
    }
    cout<<cost;
}