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
    for (int j = 0; j < 2 * i - 1; j++)
    {
      cout << '*';
    }
    cout << '\n';
  }
}