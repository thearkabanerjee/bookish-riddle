#include <iostream>
using namespace std;

int prime(int a) {
    int counter = 0;

    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            counter++;
        }
    }

    if (counter <= 4) {
        return a;
    }

    return -1;
}

int main() {
    int a;
    cin >> a;

    for (int i = 1; i <= a; i++) {
        int result = prime(i);

        if (result != -1) {
            cout << result << " ";
        }
    }

    cout << endl;

    return 0;
}

