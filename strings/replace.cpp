#include <iostream>
using namespace std;

int main() {
  string str;
  cin >> str;
  char a, b;
  cin >> a >> b;

  for (int i = 0; i < str.length(); i++) {
    if (str[i] == a) {
      str[i] = b;
    }
  }

  cout << str << endl;
  return 0;
}
