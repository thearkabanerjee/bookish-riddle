#include <iostream>
using namespace std;

int main() {
  string a;
  cin >> a;
  string b;

  for (int i = a.length() - 1; i >= 0; i--) {
    b += a[i];
  }

  if (a == b) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
