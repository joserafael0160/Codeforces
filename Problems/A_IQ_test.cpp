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
  int n, idxE, idxO, even = 0;
  int a; 
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a % 2 == 0) {
      even++;
      idxE = i + 1;
    }
    else {
      idxO = i + 1;
    }
  }
  
  cout << (even > 1 ? idxO : idxE);
}

int main() {
  IOS;


  solve();

  return 0;
}