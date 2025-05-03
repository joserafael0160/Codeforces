/**************************************************************
  author: José Rafael Pérez Rivero
  created: __DATE__ __TIME__
**************************************************************
Complex: O(n)
**************************************************************/

#include <bits/stdc++.h>
#define INF 1E9 + 7
#define IOS                           \
  ios_base::sync_with_stdio(false);   \
  cin.tie(0);                         \
  cout.tie(0)
#define long long long
#define endl "\n"
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;

void solve() {
  int n, m, l, r, lP = 0, rP = 0;
  cin >> n >> m >> l >> r;
  if (n == m) {
    cout << l << " " << r << endl;
    return;
  }

  while (m--) {
    if (( r == rP || lP * - 1 == rP) && lP > l) lP--;
    else if (rP < r) rP++;
  }
  cout << lP << " " << rP << endl;;
}

int main() {
  IOS;

  int t; 
  cin >> t;
  while(t--){
    solve();
  }
}