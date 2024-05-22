#include <iostream>
#include <vector>
using namespace std;

int max_n=1e5;

int main()
{
    int n,temp;
    cin>>n;
    vector <int> freq(max_n+1);
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        freq[temp] ++;
    }
    int count;
    int ans=0;
    for(int i=max_n;i>1;i--)
    {
        count=0;
        for(int j=i;j<=max_n;j+=i)
        {
            count+=freq[j];
        }
        if(count>=2)
        {
            ans++;
        }
    }
    return 0;
}