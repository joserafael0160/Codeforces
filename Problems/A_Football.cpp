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
  int count = 1;
  char last;
  char a;
  cin >> a;
  last = a;
  while(cin >> a) {
    if (last == a) {
      count++;
      if (count == 7) {
        cout << "YES";
        return;
      }
    }
    else {
      count = 1;
      last = a;
    }
  }
  cout << "NO";
}

int main() {
  IOS;


  solve();

  return 0;
}