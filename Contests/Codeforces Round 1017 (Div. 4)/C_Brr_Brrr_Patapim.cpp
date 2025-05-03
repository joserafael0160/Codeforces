/**************************************************************
  author: José Rafael Pérez Rivero
  username: Jose_Rafael
**************************************************************
Complex: O(n^2)
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
struct cmp {
  bool operator()(const pair<int, int> &a, const pair<int, int> &b) const {
    return a.first < b.first; 
  }
};

void solve() {
  int size;
  cin >> size;
  set<pair<int, int>, cmp> result;
  bool arr[100000] = {false};

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      int a;
      cin >> a;
      if (i < 1 || j == size - 1) {
        result.insert({i + j, a});
        arr[a] = true;
      }
    }
  }
  for (int i = 1; true; i++) {
    if (!arr[i]) {
      result.insert({-1, i});
      break;
    }
  }
  for (auto &[first, second] : result) {
    cout << second << " ";
  }
  cout << endl;
}

int main() {
  IOS;

  int t;
  cin >> t;

  while (t--) {
    solve();
  }
}