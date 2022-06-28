#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

long dp[101][10];
long mod = 1000000000;
int stairs_Num(int N)
{
  long result = 0;

  for (int i = 1; i < 10; i++)
  {
    dp[1][i] = 1;
  }

  for (int i = 2; i <= 100; i++)
  {

    for (int j = 0; j < 10; j++)
    {
      if (j == 0)
      {
        dp[i][j] = (dp[i - 1][j + 1]) % mod;
      }
      else if (j == 9)
      {
        dp[i][j] = (dp[i - 1][j - 1]) % mod;
      }
      else
      {
        dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % mod;
      }
      // cout << "dp[" << i << "][" << j << "] : " << dp[i][j] << endl;
    }
  }

  for (int i = 0; i < 10; i++)
  {
    result += dp[N][i];
  }

  return result % mod;
}

int main()
{
  fastio;
  int N;
  cin >> N;
  cout << stairs_Num(N) << "\n";
}