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
  
  for (char &c : a) c = toupper(c);
  if (a == "YES") cout << a;
  else cout << "NO";
}

int main() {
  IOS;

  int t;
  cin >> t;

  while (t--) {
    solve();
    cout << endl;
  }

  return 0;
}