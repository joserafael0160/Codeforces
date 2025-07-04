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
  string a, b;
  char c;
  cin >> a >> b;

  while (cin >> c) {
    if (a.find(c) != string::npos) {
      a.erase(a.find(c), 1);
    }
    else if (b.find(c) != string::npos) {
      b.erase(b.find(c), 1);
    }
    else {
      cout << "NO";
      return;
    }
  }

  if (a.size() == 0 && b.size() == 0) {
    cout << "YES";
  }
  else cout << "NO";
}

int main() {
  IOS;


  solve();
  

  return 0;
}