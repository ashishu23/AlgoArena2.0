#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> arr(n);
    vector <int> index (n);
    int count=1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        index[arr[i]]=i;
    }
    for(int i=1;i<n;i++)
    {
        if(index[i+1]<index[i])
        count++;
    }
    cout<<count;
}