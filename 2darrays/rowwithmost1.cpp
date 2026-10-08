#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int arr[n][m];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  int max = 0;

  int prevmax = 0;
  for (int i = 0; i < n; i++) {
    int ones = 0;
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == 1) {
        ones++;
      }
    }
    if (ones > prevmax) {
      prevmax = ones;
      max = i;
    }
  }

  if (prevmax == 0) {
    cout << -1 << endl;
  } else {
    cout << max << endl;
  }

  return 0;
}
