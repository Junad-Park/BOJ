#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
  fastio;
  int N, M, K;
  int cnt = 0;
  cin >> N >> M >> K;

  while (true)
  {
    if (N < 2 || M < 1 || N + M - 3 < K)
      break;
    N -= 2;
    M--;
    cnt++;
  }

  cout << cnt << '\n';
}