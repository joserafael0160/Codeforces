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
  int a, b;
  cin >> a >> b;
  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= b; j++) {
      if (i % 4 == 0) {
        if (j == 1) cout << '#';
        else cout << '.';
      }
      else if (i % 2 == 0) {
        if (j == b) cout << '#';
        else cout << '.';
      }
      else cout << '#';
    }
    cout << endl;
  }
}

int main() {
  IOS;


  solve();
  

  return 0;
}