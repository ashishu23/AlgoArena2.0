#include <iostream>
using namespace std;
#define ll long long


int divisors(int x)
{
    int i=2,count=2;
    for(;i*i<x;i++)
    {
        if(x%i==0)
        count+=2;
    }
    if(i*i==x)
    count++;
    return count;
}

int main()
{
    int n;
    cin>>n;
    int x;
    while(n--)
    {
        cin>>x;
        if(x==1)
        cout<<1<<endl;
        else
        cout<<divisors(x)<<endl;
    }
    return 0;
}