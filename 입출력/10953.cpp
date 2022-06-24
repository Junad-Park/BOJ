#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
  fastio;
  int T;
  cin >> T;
  cin.ignore();
  int sum = 0;
  string s;

  for (int i = 0; i < T; i++)
  {
    sum = 0;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == ',')
        continue;
      sum += s[i] - '0';
    }
    cout << sum << '\n';
  }
}