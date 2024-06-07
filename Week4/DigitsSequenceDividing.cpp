#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int digits;
        cin>>digits;
        string str;
        cin>>str;
        if(digits==2)
        {
            int num1=str[0]-'0';
            int num2=str[1]-'0';
            if(num1<num2)
            {
                cout<<"YES"<<endl<<"2"<<endl<<num1<<" "<<num2<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl<<"2"<<endl<<str[0]<<" "<<str.substr(1,digits-1)<<endl;
        }
    }
}