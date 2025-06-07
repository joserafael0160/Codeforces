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
  int a, x = 0, y = 0;
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++) {
      cin >> a;
      if (a == 1) {
        if (i != 2) {
          x = abs(i - 2);
        }
        if (j != 2) {
          y = abs(j - 2);
        }
      }
    }
  }
  cout << x + y;  
}

int main() {
  IOS;

  solve();

  return 0;
}