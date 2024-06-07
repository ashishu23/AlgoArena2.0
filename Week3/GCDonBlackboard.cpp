#include <iostream>
using namespace std;

int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

int main()
{
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector <int> prefix_gcd(n+2);
    vector <int> suffix_gcd(n+2);
    prefix_gcd[0]=0;
    prefix_gcd[n+1]=0;
    suffix_gcd[0]=0;
    suffix_gcd[n+1]=0;
    for(int i=1;i<=n;i++)
    {
        prefix_gcd[i]=gcd(prefix_gcd[i-1],arr[i-1]);
    }
    for(int i=n;i>=1;i--)
    {
        suffix_gcd[i]=gcd(suffix_gcd[i+1],arr[i-1]);
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans=max(ans,gcd(prefix_gcd[i-1],suffix_gcd[i+1]));
    }
    cout<<ans;
    return 0;
}