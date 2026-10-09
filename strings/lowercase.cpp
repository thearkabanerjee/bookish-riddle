#include <iostream>
using namespace std;

int main() {
  char a;
  cin >> a;

  if (a >= 'A' && a <= 'Z') {
    cout << char(a + 32) << endl;
  } else {
    cout << a << endl;
  }
  return 0;
}
