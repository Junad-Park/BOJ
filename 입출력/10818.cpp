#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
  fastio;
  int N;
  cin >> N;
  int num;
  vector<int> v;

  for (int i = 0; i < N; i++)
  {
    cin >> num;
    v.push_back(num);
  }

  cout << *min_element(v.begin(), v.end()) << " " << *max_element(v.begin(), v.end()) << '\n';
}