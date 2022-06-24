#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int dp[11];

int Plus(int n)
{
  dp[1] = 1; // 1 = 1
  dp[2] = 2; // 2 = 1+1, 2
  dp[3] = 4; // 3 = 1+1+1, 1+2, 2+1, 3

  for (int i = 4; i <= 11; i++)
  {
    dp[i] = (dp[i - 3] + dp[i - 2] + dp[i - 1]) % 10007;
  }

  return dp[n];
}

int main()
{
  fastio;
  int T, num;
  cin >> T;
  for (int i = 0; i < T; i++)
  {
    cin >> num;
    cout << Plus(num) << '\n';
  }
}