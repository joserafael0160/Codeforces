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
  int n;
  cin >> n;
  set<char> aa;
  for (int i = 0 ; i < n; i++) {
    char a;
    cin >> a;
    aa.insert(tolower(a));
  }
  if (aa.size() >= 26 && aa.size() <= 27) cout << "YES";
  else cout << "NO";
}

int main() {
  IOS;

  solve();
  

  return 0;
}