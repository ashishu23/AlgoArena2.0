#include <iostream>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int msb = log2(n);
        cout<<((1<<msb) - 1)<<endl;
    }
    return 0;
}