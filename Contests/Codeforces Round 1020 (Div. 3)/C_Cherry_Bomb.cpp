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
  int n, k, max_a = NEG_INF, min_a = INF;
  cin >> n >> k;
  int x = INF;
  int a[n], b[n];
  for (int i = 0; i < n; i++){
    cin >> a[i];
    if (a[i] > max_a) max_a = a[i];
    if (a[i] < min_a) min_a = a[i];
  }
  for (int i = 0; i < n; i++){
    cin >> b[i];
    if (b[i] > -1) {
      int new_x = a[i] + b[i];

      if ((x != INF) && (new_x != x)) {
        cout << 0 << endl;
        while (i < n -1) {
          int ax;
          cin >> ax;
          ++i;
        }
        return;
      }
      x = new_x;
    }
  }
  if (x == INF) {
    cout << min_a + k - (max_a - 1) << endl;
    return;
  }

  for (int i = 0 ; i < n; i++) {
    if (b[i] == -1) {
      if (a[i] + k < x || a[i] > x) {
        cout << 0 << endl;
        return;
      }
    }
  }
  if (x != INF) {
    cout << 1 << endl;
    return;
  }

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