#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int main()
{
  fastio;
  string s;
  getline(cin, s);
  int cnt = 1;
  for (int i = 0; i <s.size(); i++){
    if (s[i] == ' '){
      cnt++;
      if(i == 0) cnt --;
      else if(i == s.size()-1) cnt --;
    }
  }
  cout << cnt << '\n';

}