# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    

    for (int i = 1; i <= a; i++){
        for (int j = 0; j < i - 1; j++) {
            cout << " ";
        }

        // x's
        for (int j = 0; j < i; j++) {
            cout << "x";
        }
        cout << endl;
    }


    return 0;
}