#include <iostream>
using namespace std;

int main() {
  string str;
  getline(cin, str);

  string str1;

  for (int i = 0; i < str.length(); i++) {
    if (str[i] != ' ') {
      str1 += str[i];
    }
  }

  cout << str1 << endl;
  return 0;
}
