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
  int n, police = 0, count = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a != -1) police += a;
    else {
      if (police == 0) count++;
      else police--;
    }
  }
  cout << count;
}

int main() {
  IOS;

 
  solve();
  

  return 0;
}