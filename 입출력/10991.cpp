#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
  fastio;
  int N;
  cin >> N;

  for (int i = 1; i <= N; i++)
  {
    for (int j = N - i; j > 0; j--)
    {
      cout << ' ';
    }
    for (int j = 1; j <= i * 2 - 1; j++)
    {
      if (j % 2 == 1)
      {
        cout << '*';
      }
      else
      {
        cout << ' ';
      }
    }
    cout << '\n';
  }
}