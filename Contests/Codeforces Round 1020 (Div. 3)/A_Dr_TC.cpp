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
  int n;
  cin >> n;
  char a;
  int count = 0;

  for (int i = 0; i < n; i++){
    cin >> a;
    if (a == '0') count++;
    if (a == '1') count += n - 1;
  }
  cout << count << endl;
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