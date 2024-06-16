#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string x,y;
        cin>>x>>y;
            int flag=1;
            for(int i=0;i<n;i++)
            {
                if(x[i]!=y[i])
                {
                    if(x[i]=='C')
                    {
                        x[i]=y[i];
                        continue;
                    }
                    if(x[i]=='A' && i+1<n && x[i+1]=='B' && y[i]=='B' && y[i+1]=='A')
                    {
                        i+=1;
                        continue;
                    }
                    else
                    {
                        flag=0;
                        break;
                    }
                }
            }
            if(flag)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
    }

    return 0;
}