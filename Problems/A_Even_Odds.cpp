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
  long n, k, pos, fin;
  cin >> n >> k;
  if (n % 2 == 0) fin = n;
  else fin = n + 1;
  pos = ceil(n / 2.0);
  if (k > pos) {
    cout << k - (fin - k);
  }
  else {
    cout << k + (k - 1);
  }
}

int main() {
  IOS;

  solve();
  

  return 0;
}