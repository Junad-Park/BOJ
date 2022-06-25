#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int dp[101];

int stairs_Num(int N)
{
  dp[1] = 9;
  for (int i = 2; i <= N; i++)
  {
    dp[i] = (2 * dp[i - 1] - 1) % 1000000000;
  }
  return dp[N];
}

int main()
{
  fastio;
  int N;
  cin >> N;
  cout << stairs_Num(N) << "\n";
}