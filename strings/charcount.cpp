#include <iostream>
using namespace std;

int main() {
  char a;
  cin >> a;

  if (a >= 'A' && a <= 'Z') {
    cout << "Uppercase" << endl;
  } else if (a >= 'a' && a <= 'z') {
    cout << "Lowercase" << endl;
  } else if (a >= '0' && a <= '9') {
    cout << "Digit" << endl;
  }

  else {
    cout << "Special" << endl;
  }

  return 0;
}
