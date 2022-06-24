#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
  fastio;
  int N;
  cin >> N;

  for (int i = 1; i <= 2 * N - 1; i++)
  {
    if (i <= N)
    {
      for (int j = N - i; j > 0; j--)
      {
        cout << ' ';
      }
      for (int j = 1; j <= i; j++)
      {
        cout << '*';
      }
    }
    else
    {
      for (int j = 1; j <= i - N; j++)
      {
        cout << ' ';
      }
      for (int j = 2 * N - i; j > 0; j--)
      {
        cout << '*';
      }
        }
    cout << '\n';
  }
}