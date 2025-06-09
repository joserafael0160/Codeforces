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
  string a;
  cin >> a;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] == 'H' || a[i] == 'Q' || a[i] == '9') {
      cout << "YES";
      return;
    }
  }
  cout << "NO";
}

int main() {
  IOS;

  
  solve();

  return 0;
}