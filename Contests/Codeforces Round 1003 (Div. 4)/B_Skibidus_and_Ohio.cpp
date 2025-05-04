/**************************************************************
  author: José Rafael Pérez Rivero
  username: Jose_Rafael
**************************************************************
Complex: O(n)
**************************************************************/

#include <bits/stdc++.h>

#define INF 1E9 + 7
#define NEG_INF -1E9
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define long long long
#define endl "\n"
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;

void solve() {
  string s;
  cin >> s;

  for (int i = 0; i < s.size() - 1; ) { 
    if (s[i] == s[i + 1]) {
      s.erase(i, 1); 
      if (i > 0) i--;
      if (i + 1 < s.size()) s.replace(i + 1, 1, string(1, s[i]));
    } 
    else {
      i++; 
    }
  }
  cout << s.size() << endl;
}

int main() {
  IOS;

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}