#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
  fastio;
  int N;
  cin >> N;

  for (int i = 1; i < 10; i++)
  {
    cout << N << " * " << i << " = " << N * i << '\n';
  }
}