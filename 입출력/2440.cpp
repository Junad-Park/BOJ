#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
  fastio;
  int N;
  cin >> N;

  for (int i = N; i > 0; i--)
  {
    for (int j = 0; j < i; j++)
    {
      cout << '*';
    }
    cout << '\n';
  }
}