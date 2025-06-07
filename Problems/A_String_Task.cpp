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
  string a = "";
  char b;
  while (cin >> b) {
    if (toupper(b) != 'A' && toupper(b) != 'O' && toupper(b) != 'Y' && toupper(b) != 'E' && toupper(b) != 'U' && toupper(b) != 'I') {
      a += "." + string(1, tolower(b));
    }
  }  
  cout << a;
}

int main() {
  IOS;


  solve();

  return 0;
}