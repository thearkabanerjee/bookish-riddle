#include <iostream>
using namespace std;

int main() {
  string a;
  int count = 0;
  getline(cin, a);

  for (int i = 0; i < a.length(); i++) {
    if (a[i] == ' ') {
      count++;
    }
  }

  cout << count + 1 << endl;
  return 0;
}
