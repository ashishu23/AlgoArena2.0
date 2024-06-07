#include <iostream>
using namespace std;


int main()
{
    int n,k,x1,y1,x2,y2;
    cin>>n>>k;
    int mat[1001][1001];
    for(int i=0;i<n;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        mat[x1][y1]++;
        mat[x1][y2]--;
        mat[x2][y1]--;
        mat[x2][y2]++;
    }
    int ans=0;
    for(int i=0;i<=1000;i++)
    {
        for(int j=0;j<=1000;j++)
        {
            if(i)
            {
                mat[i][j]+=mat[i-1][j];
            }
            if(j)
            {
                mat[i][j]+=mat[i][j-1];
            }
            if(i && j)
            {
                mat[i][j]-=mat[i-1][j-1];
            }
            if(mat[i][j]==k)
            {
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}