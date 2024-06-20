#include <iostream>
#include <vector>
#include <cstring>
// #include <bits/stdc++.h>
using namespace std;
#define int long long int

const int N=1001;
const int MOD=1e9+7;
int h,w;
char matrix[N][N];
int dp[N][N];

int solve(int i,int j)
{
    int &ans=dp[i][j];
    if(ans!=-1)
    {
        return ans;
    }
    ans=0;
    if(i+1<=h  && matrix[i+1][j]!='#')
    {
        ans=(ans+solve(i+1,j))%MOD;
    }
    if(j+1<=w &&  matrix[i][j+1]!='#' )
    {
        ans=(ans+solve(i,j+1))%MOD;
    }
    if(i==h && j==w)
    {
        ans=1;
    }
    return ans;
}

int32_t main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    cin>>h>>w;
    for(int i=1;i<=h;i++)
    {
        for(int j=1;j<=w;j++)
        {
            cin>>matrix[i][j];
        }
    }
    memset(dp,-1,sizeof(dp));
    solve(1,1);
    cout<<dp[1][1];
    return 0;
}