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
  long a, b, count = 0;
  cin >> a >> b;
  int dist = abs(a - b);
  if (dist != 0) {
    if (dist > 9) {
      count += dist / 10;
      dist = dist % 10;
    }
    if (dist != 0) count++;
  }
  cout << count;
}

int main() {
  IOS;

  int t;
  cin >> t;

  while (t--) {
    solve();
    cout << endl;
  }

  return 0;
}