#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <ll> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int s=1,e=n;
        int ans=n;
        while(s<=e)
        {
            int k=(s+e)/2;
            int temp1=-1;
            int flag=1;
            for(int i=0;i<=n-(k);i++)
            {
                int temp2=0;
                for(int j=i;j<i+k;j++)
                {
                    temp2=temp2 | arr[j];
                }
                if(temp1==-1)
                {
                    temp1=temp2;
                }
                else if(temp1!=temp2)
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
            {
                ans=k;
                e=k-1;
            }
            else
            {
                s=k+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}