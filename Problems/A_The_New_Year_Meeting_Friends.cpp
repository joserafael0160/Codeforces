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
  int x1, x2, x3;
  cin >> x1 >> x2 >> x3;

  vector<int> positions = {x1, x2, x3};
  sort(positions.begin(), positions.end());

  int mid = positions[1];

  int total = abs(x1 - mid) + abs(x2 - mid) + abs(x3 - mid);
  
  cout << total << endl;
}

int main() {
  IOS;


  solve();

  return 0;
}