/**************************************************************
  author: José Rafael Pérez Rivero
  username: Jose_Rafael
**************************************************************
Complex: O(1)
**************************************************************/

#include <bits/stdc++.h>
#define INF 1E9 + 7
#define IOS                           \
  ios_base::sync_with_stdio(false);   \
  cin.tie(0);                         \
  cout.tie(0)
#define long long long
#define endl "\n"
#define watch(x) cout << (#x) << " is " << (x) << endl

using namespace std;

void solve() {
  string a, b, c;
  cin >> a >> b >> c;
  cout << a[0] << b[0] << c[0] << endl;
}

int main() {
  IOS;

  int t; 
  cin >> t;
  while (t--){
    solve();
  }
}