# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;

    int result = 0;

    for (int i = 1; i <= 2; i++){
        result = a% 10;
        a/= 10;
    }
    cout << result << endl;
    return 0;
}