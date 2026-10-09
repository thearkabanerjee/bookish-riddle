#include <iostream>
using namespace std;

int main() {
  string str;
  cin >> str;
  char a;
  cin >> a;
  string str1;
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == a) {
      continue;
    } else {
      str1 += str[i];
    }
  }

  cout << str1 << endl;
  return 0;
}
