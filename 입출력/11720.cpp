#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
  fastio;
  int N, sum = 0;
  cin >> N;
  string s;
  cin >> s;
  for (int i = 0; i < N; i++)
  {
    sum += s[i] - '0';
  }
  cout << sum << '\n';
}