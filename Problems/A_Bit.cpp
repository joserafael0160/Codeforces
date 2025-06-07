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

int solve() {
  bool flag = false;
  int r;

  for (int i = 0; i < 3; i++) {
    char a;
    cin >> a;
    if (!flag && a == '+') {
      flag = true;
      r = 1;
      
    }
    if (!flag && a == '-') {
      flag = true;
      r = -1;
    }
  }
  return r;
}

int main() {
  IOS;

  int t;
  cin >> t;

  int x = 0; 
  while (t--) {
    x += solve();
  }
  cout << x;

  return 0;
}