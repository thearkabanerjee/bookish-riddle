#include <iostream>
using namespace std;

int main() {
  int n, m, search;
  cin >> n >> m >> search;

  int arr[n][m];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  bool verdict = false;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == search) {
        verdict = true;
        break;
      }
    }

    if (verdict) {
      break;
    }
  }

  cout << boolalpha << verdict << endl;

  return 0;
}
