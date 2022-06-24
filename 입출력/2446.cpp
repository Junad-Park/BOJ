#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
  fastio;
  int N;
  cin >> N;

  for (int i = 0; i < 2 * N - 1; i++)
  {
    if (i < N)
    {
      for (int j = 0; j < i; j++)
      {
        cout << ' ';
      }
      for (int j = 0; j < (2 * N - 1) - (2 * i); j++)
      {
        cout << '*';
      }
    }
    else
    {
      for (int j = i - (i - N + 1) * 2; j > 0; j--)
      {
        cout << ' ';
      }

      for (int j = 0; j < (i - N + 2) * 2 - 1; j++)
      {
        cout << '*';
      }
    }
    cout << '\n';
  }
}