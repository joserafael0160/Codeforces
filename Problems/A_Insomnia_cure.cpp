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
  int k, l, m, n, d;
  cin >> k >> l >> m >> n >> d;
  set <int> a;
  for (int i = k; i <= d; i += k) {
    a.insert(i);
  }
  for (int i = l; i <= d; i += l) {
    a.insert(i);
  }
  for (int i = m; i <= d; i += m) {
    a.insert(i);
  }
  for (int i = n; i <= d; i += n) {
    a.insert(i);
  }
  cout << a.size();
}

int main() {
  IOS;


    solve();

  return 0;
}