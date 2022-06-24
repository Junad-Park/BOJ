#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int dp[1001];

int tiling(int n)
{
  dp[1] = 1;
  dp[2] = 3;

  for (int i = 3; i <= 1001; i++)
  {
    dp[i] = (dp[i - 2] * 2 + dp[i - 1]) % 10007;
  }

  return dp[n];
}

int main()
{
  fastio;
  int n;
  cin >> n;

  cout << tiling(n) << '\n';
}