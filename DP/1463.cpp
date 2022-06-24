#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int dp[1000000];

int min_idx(int arr[])
{
  for (int i = 0; i < 3; i++)
  {
    if (arr[i] == 0)
    {
      arr[i] = INT_MAX;
    }
  }

  int min = arr[0];

  int min_idx = 0;

  for (int i = 0; i < 3; i++)
  {
    if (min > arr[i])
    {

      min = arr[i];
      min_idx = i;
    }
  }
  return min_idx;
}

int Make_1(int N)
{
  dp[2] = 1;
  dp[3] = 1;
  int min;
  for (int i = 4; i <= N; i++)
  {
    int temp[3] = {0};
    if (i % 3 == 0)
    {
      temp[0] = dp[i / 3];
    }
    if (i % 2 == 0)
    {
      temp[1] = dp[i / 2];
    }
    temp[2] = dp[i - 1];
    min = min_idx(temp);

    if (min == 0)
    {
      dp[i] = dp[i / 3] + 1;
    }
    else if (min == 1)
    {
      dp[i] = dp[i / 2] + 1;
    }
    else
    {
      dp[i] = dp[i - 1] + 1;
    }
  }
  return dp[N];
}

int main()
{
  fastio;
  int N, cnt = 0;

  cin >> N;

  cout << Make_1(N) << '\n';
}