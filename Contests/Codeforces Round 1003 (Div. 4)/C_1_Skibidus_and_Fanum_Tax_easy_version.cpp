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
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  vector<int> b(m);

  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < m; i++) cin >> b[i];

  int b_val = b[0];

  if (n == 1) {
    cout << "YES" << endl;
    return;
  }
  
  for (int i = 0; i < n; i++) {
    if (i == 0) {
      a[i] = min(b_val - a[i], a[i]);
    }
    else {
      int other = b_val - a[i];
      int min_n = min(other, a[i]);
      int max_n = max(other, a[i]);
      if (max_n < a[i - 1]) {
        cout << "NO" << endl;
        return;
      }
      if (min_n < a[i - 1]) a[i] = max_n;
      
      else a[i] = min_n;

    }
  }
  
  cout << "YES" << endl;
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