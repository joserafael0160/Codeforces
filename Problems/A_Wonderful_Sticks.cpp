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

int find_max(vector<int> a, int n, int max, int ind_max) {
  for(int i = 0; i <= n; i++) {
    if (a[i] > max) {
      max = a[i];
      ind_max = i;
    }
  }

  return ind_max;
}
int find_min(vector<int> a, int n, int min, int ind_min) {
  for(int i = 0; i <= n; i++) {
    if (a[i] < min) {
      min = a[i];
      ind_min = i;
    }
  }

  return ind_min;
}

void shift_range(vector<int>& a, int n, int m) { 
  if (n == m) return;

  int aux = a[n];

  for (int i = n; i < m; i++) { 
    a[i] = a[i + 1];
  }

  a[m] = aux;
}

void solve() {
  int n;
  cin >> n;

  vector <int> a(n, 3);
  

  for (int i = 1; i <= n; i++) {
    a[i - 1] = i;
  }

  for (int i = 1; i < n; i++) {
    char aa;
    cin >> aa;
    if (aa == '>') {
      shift_range(a, find_max(a, i, a[i], i), i);

    }
    else {
      shift_range(a, find_min(a, i, a[i], i), i);

    }

  }

  for (int i : a) {
    cout << i << " ";
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

  return 0;
}