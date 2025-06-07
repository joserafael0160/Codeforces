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
  int upper = 0, lower = 0;
  cin >> a;
  for (char c : a) {
    if (isupper(c)) upper++;
    if (islower(c)) lower++;
  }
  if (lower >= upper) {
    for (char c : a) cout << (char)tolower(c);
    return;
  }
  for (char c : a) cout << (char)toupper(c);
  
}

int main() {
  IOS;

  solve();

  return 0;
}