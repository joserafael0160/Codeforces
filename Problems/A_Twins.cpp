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
  int n, sum = 0;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }

  sort(a, a + n, greater<int>());
  int presum = 0;

  for (int i = 0; i < n; i++) {
    presum += a[i];
    sum -= a[i];
    if (presum > sum) {
      cout << i + 1;
      return;
    }
  }
}

int main() {
  IOS;

  solve();

  return 0;
}