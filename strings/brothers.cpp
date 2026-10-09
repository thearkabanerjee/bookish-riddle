#include <iostream>
using namespace std;

int main() {
  string firstname1, lastname1, firstname2, lastname2;
  cin >> firstname1 >> lastname1 >> firstname2 >> lastname2;

  if (lastname1 == lastname2) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
