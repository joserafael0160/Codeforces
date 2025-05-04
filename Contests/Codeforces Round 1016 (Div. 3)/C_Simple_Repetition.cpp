/**************************************************************
  author: José Rafael Pérez Rivero
  username: Jose_Rafael
**************************************************************
Complex: O(sqrt(n))
**************************************************************/

#include <bits/stdc++.h>

#define INF 1E9 + 7
#define NEG_INF -1E9
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define long long long
#define endl "\n"
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;
bool is_prime(long n) {
  if (n < 2) return false;
  for (long i = 2; i * i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

void solve() {
  long x, k;
  cin >> x >> k;

  if (x == 1 && k == 2) {
    cout << "YES" << endl;
  }
  else {
    cout << (is_prime(x) && k == 1 ? "YES" : "NO") << endl;
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