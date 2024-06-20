#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

const long long INF = 1e18;

vector<int> f(vector<int>& a) 
{
    int n = a.size();
    vector<long long> dp(n, INF);
    vector<int> l(n);
    for (int i = 0; i < n; ++i) 
    {
        int x = a[i];
        auto pos = lower_bound(dp.begin(), dp.end(), x);
        *pos = x;
        l[i] = pos - dp.begin();
    }
    return l;
}

int main() 
{
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) 
        {
            cin >> A[i];
        }
        vector<int> l = f(A);

        vector<int> revA(A.rbegin(), A.rend());
        for (int i = 0; i < N; ++i) 
        {
            revA[i] = -revA[i];
        }
        vector<int> r = f(revA);

        int m = *max_element(l.begin(), l.end());
        vector<int> ans;
        for (int i = 0; i < N; ++i) 
        {
            if (l[i] + r[N - i - 1] == m) 
            {
                ans.push_back(i + 1);
            }
        }

        cout << ans.size() << endl;
        for (int x : ans) 
        
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
