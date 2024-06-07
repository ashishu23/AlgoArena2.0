#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> sites(n);
        for(int i=0;i<n;i++)
        {
            cin>>sites[i];
        }
        vector <int> prefix_sum(n);
        vector <int> suffix_sum(n);
        for(int i=0;i<n;i++)
        {
            prefix_sum[i]=sites[i]+i;
            suffix_sum[i]=sites[i]-i;
        }
        for(int i=1;i<n;i++)
        {
            prefix_sum[i]=max(prefix_sum[i],prefix_sum[i-1]);
        }
        for(int i=n-2;i>=0;i--)
        {
            suffix_sum[i]=max(suffix_sum[i],suffix_sum[i+1]);
        }
        int ans=0;
        for(int i=1;i<n-1;i++)
        {
            ans=max(ans,prefix_sum[i-1]+sites[i]+suffix_sum[i+1]);
        }
        cout<<ans<<endl;

    }
    return 0;
}