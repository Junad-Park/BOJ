#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
  fastio;
  int T;
  cin >> T;
  int A, B;
  for (int i = 0; i < T; i++)
  {
    cin >> A >> B;
    cout << "Case #" << i + 1 << ": " << A << " + " << B << " = " << A + B << '\n';
  }
}