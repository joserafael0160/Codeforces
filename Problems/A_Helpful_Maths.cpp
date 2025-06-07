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
  char a;
  int i = 0;
  vector<int> aa;
  while(cin >> a) {
    if (a != '+') {
      aa.push_back(a - '0');
    }
  }
  sort(aa.begin(), aa.end());

  for(int i = 0; i < aa.size(); i++) {
    cout << aa[i] << (aa.size() - 1 != i ? "+" : "");
  }
}

int main() {
  IOS;


  solve();

  return 0;
}