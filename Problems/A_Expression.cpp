/**************************************************************
  author: José Rafael Pérez Rivero
  username: Jose_Rafael
**************************************************************
Complex: O(1)
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
  int a, b, c;
  cin >> a >> b >> c;
  
  if (a > 1 && b > 1 && c > 1) {
    cout << a * b * c;
  }
  else {
    int x;
    if (a == 1 && b == 1 && c == 1) cout << (a + b + c);
    else if (a == 1  && b == 1) cout << (a + b) * c;
    else if (a == 1  && c == 1) cout << (a + b + c);
    else if (b == 1  && c == 1) cout << a * (b + c);
    else if (a == 1) cout << (a + b) * c;
    else if (c == 1) cout << a * (b + c);
    else {
      if ((a + b) * c >= a * (b + c)) cout << (a + b) * c;
      else cout << a * (b + c);
    }
  }
}

int main() {
  IOS;


  solve();
  

  return 0;
}