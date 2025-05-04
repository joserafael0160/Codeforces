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
  string n;
  cin >> n;
  int counter = 0;
  bool flag = false;
  for (int i = n.size() - 1; i >= 0; i--) {
    if (!flag) {
      if (n[i] == '0') counter++;
      else flag = true;
      
    }
    else if (flag) {
      if (n[i] != '0') counter++;
    }
  }

  cout << counter << endl;
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