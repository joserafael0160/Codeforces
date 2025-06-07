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
  char a;
  int count = 0;
  bool flag = true, first = false, second = false;
  while(cin >> a)  {
    if (a == '7' || a == '4') count++;
  }
  cout <<(count == 4 || count == 7  ? "YES" : "NO");
}

int main() {
  IOS;

  solve();

  return 0;
}