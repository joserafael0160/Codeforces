/**************************************************************
  author: José Rafael Pérez Rivero
  username: Jose_Rafael
**************************************************************
Complex: O(n + m)
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


bool answer(string a, string b) {
  int i = 0, j = 0;

  int aSize = a.size();
  int bSize = b.size();
  if(aSize * 2 < bSize) return false;

  char actual_character;
  while(i < aSize && j < bSize) 
  {
    if (a[i] != b[j]) return false;
    actual_character = a[i];
    int counterA = 1, counterB = 1;
    for (int k = i; k < aSize - 1; k++){
      if (a[k + 1] == actual_character) counterA++;
      else break;
    }    
    for (int k = j; k < bSize - 1; k++){
      if (b[k + 1] == actual_character) counterB++;
      else break;
    }
    if (!(counterA <= counterB && counterB <= counterA * 2)) return false;
    i += counterA;
    j += counterB;
  }

  if (i == aSize && j == bSize) return true;

  return false;
}

void solve (){
  string a, b;
  cin >> a >> b;

  cout << (answer(a, b) ? "YES" : "NO") << endl; 
}

int main() {
  IOS;

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}