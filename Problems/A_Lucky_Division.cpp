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
bool is_almost_lucky(int a, int b = 1) {
  watch(b);
  if (b > a) return false;
  if (a % b == 0) return true;
  if (b == 1) {
    if (a % 4 == 0 || a % 7 == 0) return true;
  }
  
  return is_almost_lucky(a, (b*10) + 4) || is_almost_lucky(a, (b*10) + 7);
}

void solve() {
  int a;
  cin >> a;
  cout << (is_almost_lucky(a) ? "YES": "NO");  
}

int main() {
  IOS;

  solve();

  return 0;
}