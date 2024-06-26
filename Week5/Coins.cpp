#include <iomanip>
#include <ios>
#include <iostream>
#include <vector>
#include <cstring>
#define ll long long
#define sp(x) fixed<<setprecision(x)

using namespace std;

double dp[3001][3001];
double fun(vector<double> &p, int i, int atleast_heads)
{
    if(atleast_heads == 0)
    return 1;

    if(i == 0)
    return 0;

    if(dp[i][atleast_heads] > -0.9)
    return dp[i][atleast_heads];
    
    return dp[i][atleast_heads] = p[i]*fun(p,i-1,atleast_heads-1) + (1-p[i])*fun(p,i-1,atleast_heads);
}

int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    vector<double> p(n+1);

    for(int i=1;i<=n;i++)
    cin>>p[i];

    cout<<sp(10)<<fun(p,n,(n+1)/2)<<endl;

    return 0;
}