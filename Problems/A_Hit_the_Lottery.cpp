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
  int count = 0;

  while(n != 0) {
    count++;
    if (n >= 100) n -= 100;
    else if (n >= 20) n -= 20;
    else if (n >= 10) n -= 10;
    else if (n >= 5) n -= 5;
    else n -= 1;
  }
  cout << count;
}

int main() {
  IOS;


  solve();
  

  return 0;
}