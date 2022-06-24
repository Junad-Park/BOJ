#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
  fastio;
  int n, sum = 0;
  cin >> n;
  for (int i = 1; i <= n; i++)
    sum += i;
  cout << sum << '\n';
}