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
        string str;
        cin>>str;
        map <int,int> mp;
        mp[0]++;
        int s=0;
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            s+=str[i]-'0';
            ans+=mp[s-(i+1)];
            ++mp[s-(i+1)];
        }
        cout<<ans<<endl;
    }
    return 0;
}