#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
  fastio;
  int N;
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    for (int j = N - 1 - i; j > 0; j--)
    {
      cout << ' ';
    }

    for (int j = 0; j <= i; j++)
    {
      cout << '*';
    }
    cout << '\n';
  }
}