#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,mod=1e9+7;
    cin>>n;
    int S = n*(n+1)/2; 
    int s = S/2; 
    vector<vector<int>> dp(n+1,vector<int>(s+1,0)); 
    dp[0][0] = 1;

    for(int sum=0;sum<=s;sum++)
    {
            
        for(int i=1;i<n;i++)
        {
                dp[i][sum] = dp[i-1][sum];
                if(sum - i >= 0)
                {
                    dp[i][sum] = dp[i-1][sum] + dp[i-1][sum-i];
                    dp[i][sum] %= mod;
                }
        }
    }
    (S%2 != 0) ? (cout<<0<<endl) : (cout<<dp[n-1][s]<<endl); 

    return 0;
}