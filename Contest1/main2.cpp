// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

const int N = 2e7 + 13;

int main() {
  vector<int> mind(N, -1);
  vector <int> val(N);
  mind[1] = 1;
  for (int i = 2; i < N; ++i) 
  {
    if (mind[i] == -1)
    {
        for (int j = i; j < N; j += i) 
        {
            if (mind[j] == -1)
            mind[j] = i;
        }
    }
  }
  for (int i = 2; i < N; ++i) 
  {
    int j = i / mind[i];
    val[i] = val[j] + (mind[i] != mind[j]);
  }
  
  int t;
  cin>>t;
  while (t--) {
    int c, d, x;
    cin>>c>>d>>x;
    int ans = 0;
    for (int i = 1; i * i <= x; ++i) {
      if (x % i != 0) continue;
      int k1 = x / i + d; 
      if (k1 % c == 0) ans += 1 << val[k1 / c];
      if (i * i == x) continue;
      int k2 = i + d;
      if (k2 % c == 0) ans += 1 << val[k2 / c]; 
    }
    cout<<ans<<endl;
  }
}