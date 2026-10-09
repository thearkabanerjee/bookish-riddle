#include <iostream>
using namespace std;

int main() {
  string str1, str2;
  cin >> str1 >> str2;

  if (str1 > str2) {
    cout << "B" << endl;
  } else if (str1 < str2) {
    cout << "A" << endl;
  } else if (str1 == str2) {
    cout << "Equal" << endl;
  }

  return 0;
}
