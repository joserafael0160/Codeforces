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
  int counter = 0, temp_count = 0;
  char a, last;
  cin >> a;
  last = a;
  for (int i = 1; i < n; i++) {
    cin >> a;
    if (a == last) temp_count++;
    else last = a; 

    if (temp_count == 1) {
      temp_count = 0;
      counter++;
    }
  }
  cout << counter;
}

int main() {
  IOS;


  solve();
  

  return 0;
}