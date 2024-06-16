#include<iostream>
using namespace std;
#define int long long int


int xpow(int x, int y)
{
    int res=1;
    while(y>0)
    {
        if (y&1) res= (res*x); y=y>>1; x=(x*x);
    }
    return res;
}

int solve(int x) {
	if (x < 0) 
        return 0;
	if (x == 0) 
        return 1;
	int flag = 1;
	while(flag) 
    {
		flag = 0;
		for (int i = log10(x) - 1; i >= 0; i--) 
        {
			int m = xpow(10, i);
			if (x/(m*10)%10 == x/m%10) 
            {
				x = (x/m - 1)*m + (m-1);
				flag = 1;
			}
		}
	}
	int n = log10(x)+1;
	int dp[n+1][2];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<2;j++)
        {
            dp[i][j]=0;
        }
    }
	dp[0][0] = 1, dp[0][1] = 1;
	int ans = 1;
	int m = 1;
	for (int i = 1; i < n; i++, m *= 10) 
    {
		dp[i][0] = xpow(9, i);
		dp[i][1] = (x/m%10)*dp[i-1][0] + dp[i-1][1];
		if (x/m%10 > x/(m*10)%10) 
            dp[i][1] -= dp[i-1][0];
		ans += dp[i][0];
	}
	dp[n][1] = (x/m%10 - 1)*dp[n-1][0] + dp[n-1][1];
   	return ans + dp[n][1];
   	
}

int32_t main(){
    int x, y; 
    cin>>x>>y;
    cout<<solve(y) - solve(x-1);
    
}