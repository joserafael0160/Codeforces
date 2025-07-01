/**************************************************************
  author: José Rafael Pérez Rivero
  username: Jose_Rafael
**************************************************************
Complex: O(1)
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
  string a;
  cin >> a;

  if ((a[0] - '0') + (a[1] - '0') + (a[2] - '0') == (a[5] - '0') + (a[4] - '0') + (a[3] - '0')) cout << "YES";
  else cout << "NO";
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