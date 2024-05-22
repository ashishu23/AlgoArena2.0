#include <iostream>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,x;
    cin>>n>>x;
    vector <int> weights;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        weights.push_back(temp);
    }
    sort(weights.begin(),weights.end());
    int start=0,end=n-1;
    int answer=0;
    while(start<=end)
    {
        if(weights[end]>x)
        {
            break;
        }
        if(weights[start]+weights[end]<=x)
        {
            start++;
        }
        end--;
        answer++;
    }
    cout<<answer;
    return 0;
}