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
  set<int> aa;
  int p;
  cin >> p;
  for (int i = 0; i < p; i++) {
    int a;
    cin >> a;
    aa.insert(a);
  }
  int p2;
  cin >> p2;
  for (int i = 0; i < p2; i++) {
    int a;
    cin >> a;
    aa.insert(a);
  }
  if (aa.size()< n) cout << "Oh, my keyboard!";
  else cout << "I become the guy.";
}

int main() {
  IOS;

  solve();

  return 0;
}