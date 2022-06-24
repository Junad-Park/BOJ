#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
  fastio;
  int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  string weeks[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

  int M, D;
  int total_days = 0;
  cin >> M >> D;

  for (int i = 0; i < M - 1; i++)
  {
    total_days += days[i];
  }
  total_days += D;

  cout << weeks[total_days % 7] << endl;
}