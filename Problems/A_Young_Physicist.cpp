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
  int x = 0, y = 0, z = 0;
  cin >> n;  

  while(n--) {
    int a, b, c;
    cin >> a >> b >> c;
    x += a;
    y += b;
    z += c;
  }
  if (x == 0 && y == 0 && z == 0) cout << "YES";
  else cout << "NO";
}

int main() {
  IOS;

  solve();

  return 0;
}