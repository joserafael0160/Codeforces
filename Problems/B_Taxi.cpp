/**************************************************************
  author: José Rafael Pérez Rivero
  username: Jose_Rafael
**************************************************************
Complex: O(nlogn)
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
  int n, count = 0;
  cin >> n;
  vector<int> s;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a == 4) count++;
    else {
      s.push_back(a);
    }
  }
  sort(s.begin(), s.end());
  int i = 0, j = s.size() - 1;

  while(s[i] == 1 && s[j] == 3) {
    s.pop_back()
  }

  cout << count;
}

int main() {
  IOS;

  solve();

  return 0;
}