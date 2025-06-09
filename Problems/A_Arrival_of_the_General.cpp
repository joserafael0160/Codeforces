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
int find_max_index(int a[],int n) {
  int max = a[0], index = 0;


  for (int i = 1; i < n; i++) {
    if (a[i] > max) {
      index = i;
      max = a[i];
    }
  }
  return index;
}
int find_min_index(int a[],int n) {
  int min = a[0], index = 0;
  
  for (int i = 1; i < n; i++) {
    if (a[i] <= min) {
      index = i;
      min = a[i];
    }
  }
  return index;
}
void solve() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int max = find_max_index(a, n);
  int min = find_min_index(a, n);
  int pasos =  max + ((n -1) - min);
  if (max > min) pasos--;
  cout << pasos;
}

int main() {
  IOS;

  solve();
  

  return 0;
}