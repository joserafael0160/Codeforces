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
  int n; 
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) a += "I hate that";
    else a += "I love that";
    a += " ";
  }
  a.replace(a.rfind("that"), 4, "it");
  cout << a;
}

int main() {
  IOS;

  solve();


  return 0;
}