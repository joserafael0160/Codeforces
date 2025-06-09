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
  int count = 1, countMax = 1, last;
  cin >> last;
  for (int i = 0; i < n - 1; i++) {
    int a;
    cin >> a;
    if (a >= last) count++;
    else count = 1;
    
    if (count > countMax) countMax = count;
    last = a;
  }
  cout << countMax;
}

int main() {
  IOS;

  solve();

  return 0;
}