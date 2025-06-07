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
bool is_beauty(int n) {
  bool a[20];
  for (int i = 0; i < 11; i++) a[i] = false;

  for (int i = 0; i < 4; i++) {
    int c;
    c = n % 10;
    n /= 10;
    if (a[c]) return false;
    a[c] = true; 
  }
  return true;
}
void solve() {
  int a; 
  cin >> a;
  do 
  {
    a++;
  }while (!is_beauty(a));
  cout << a;
}

int main() {
  IOS;

  solve();
  

  return 0;
}