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

bool solve() {
  char a;
  int p = 0;
  string b = "hello";
  while (cin >> a) {
    if (a == b[p]) p++;
    if (p == 5) return true;
  }  
  return false;
}

int main() {
  IOS;

  cout << (solve() ? "YES" : "NO");

  return 0;
}